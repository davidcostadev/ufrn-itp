const { exec } = require('child_process');

const programName = process.argv[process.argv.length - 1];

const command = `cc ./src/${programName}.c -o ./output/${programName} -lm`;

exec(command, (err, stdout, stderr) => {
  if (err) {
    console.log(err.toString());
    return;
  }

  if (stdout) {
    console.log(`stdout: ${stdout}`);
  }
  if (stderr) {
    console.log(`stderr: ${stderr}`);
  }

  console.log(new Date(), `${programName}.c file compiled`);
});
