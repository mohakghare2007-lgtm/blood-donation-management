<?php

$result = "";

if (isset($_POST["id"]))
{
    $id = $_POST["id"];

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

    if (is_resource($process))
    {
        fwrite($pipes[0], $id . PHP_EOL);
        fclose($pipes[0]);

        $result = stream_get_contents($pipes[1]);
        fclose($pipes[1]);

        fclose($pipes[2]);

        proc_close($process);
    }
    else
    {
        $result = "C++ program could not be started.";
    }
}
?>

<!DOCTYPE html>
<html>

<head>
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
                <td><b>Donor ID</b></td>
                <td>
                    <input type="text" name="id" inputmode="numeric" pattern="[0-9]*" required>
                </td>
            </tr>

            <tr>
                <td colspan="2" align="center">
                    <input type="submit" value="Search Donor">
                </td>
            </tr>

        </table>

    </form>

    <br>

    <?php

    if ($result != "")
    {
        echo "<table border='1' cellpadding='10'>";
        echo "<tr>";
        echo "<td><b>Donation History</b></td>";
        echo "</tr>";

        echo "<tr>";
        echo "<td><pre>" . $result . "</pre></td>";
        echo "</tr>";

        echo "</table>";
    }

    <br>

    <hr>

    <p><b>Blood Donation Management System</b></p>
    <p>Donor Search using Binary Search</p>

</center>

</body>

</html>

?>

</body>
</html>
