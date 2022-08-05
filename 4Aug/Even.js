console.log("whether a  number is even or odd ");

const number = prompt("Enter a number: ");

let ans;
if(number % 2 == 0) {
     ans = "The number is even.";
}

else {
     ans = "The number is odd.";
}

document.getElementById("demo").innerHTML = ans;
