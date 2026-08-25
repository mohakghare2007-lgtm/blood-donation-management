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

<body bgcolor="lime">

<h1><center>Blood Donation Management System</center></h1>

<p>Enter Donor ID to see donation history.</p>

<form method="post">

    Enter ID:
    <input type="number" name="id">

    <input type="submit" value="Search">

</form>

<br>

<?php

if ($result != "")
{
    echo "<pre>";
    echo $result;
    echo "</pre>";
}

?>

</body>
</html>