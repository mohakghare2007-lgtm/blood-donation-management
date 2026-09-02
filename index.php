
<?php

$result = "";

if (isset($_POST["id"])) {

    $id = trim($_POST["id"]);

    $exe = __DIR__ . "/ds_simple_proj";

    $process = proc_open(
        $exe,
        array(
            0 => array("pipe", "r"),
            1 => array("pipe", "w"),
            2 => array("pipe", "w")
        ),
        $pipes
    );

    if (is_resource($process)) {

        fwrite($pipes[0], $id . PHP_EOL);
        fclose($pipes[0]);

        $result = stream_get_contents($pipes[1]);
        fclose($pipes[1]);

        $error = stream_get_contents($pipes[2]);
        fclose($pipes[2]);

        proc_close($process);

        if ($result == "" && $error != "") {
            $result = "C++ Error: " . $error;
        }

    } else {

        $result = "C++ program could not be started.";
    }
}

?>

<!DOCTYPE html>
<html>

<head>

    <meta charset="UTF-8">

    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <title>Blood Donation Management System</title>

</head>

<body bgcolor="lightgray">

<center>

    <h1>Blood Donation Management System</h1>

    <hr>

    <h2>Donor History</h2>

    <p>Enter the Donor ID to check donation history.</p>

    <form method="post">

        <table border="1" cellpadding="10">

            <tr>

                <td>
                    <b>Donor ID</b>
                </td>

                <td>

                    <input
                        type="text"
                        name="id"
                        inputmode="numeric"
                        pattern="[0-9]*"
                        required
                    >

                </td>

            </tr>

            <tr>

                <td colspan="2" align="center">

                    <input
                        type="submit"
                        value="Search Donor"
                    >

                </td>

            </tr>

        </table>

    </form>

    <br>

    <?php if ($result != "") { ?>

        <table border="1" cellpadding="10">

            <tr>

                <td>
                    <b>Donation History</b>
                </td>

            </tr>

            <tr>

                <td>

                    <pre><?php echo htmlspecialchars($result); ?></pre>

                </td>

            </tr>

        </table>

    <?php } ?>

    <br>

    <hr>

    <p>
        <b>Blood Donation Management System</b>
    </p>

    <p>
        Donor Search using Binary Search
    </p>

</center>

</body>

</html>
