
const number = parseInt(prompt("Enter a positive number: "));
let isPrime = true;
let ans;

if (number === 1) {
    console.log("1 is neither prime nor composite number.");
}


else if (number > 1) {

   
    for (let i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        ans =  "  is a prime number";
    } else {
         ans = "  is a not prime number";
    }
}

// check if number is less than 1
else {
    ans   = " is negative ";
}

document.getElementById("demo").innerHTML = `${number}  ` +  ans;