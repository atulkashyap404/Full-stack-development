//There are two data type in JavaScript.
// 1. Primitive DataType -------> Memory allocation in Stack. *****----->(Base Datatype)
/*
1. String -------> " Atul"
2. Number -------> 34
3. Boolean -------> true or false
4. Null ---------> ....
5. undefined .......
6. Symbol ........
*/
// 2. Reference DataType --------> Memory allocation on Heap(Dynamic memory). *****----->(Objects Datatype)
/*
1. Array
2. object literals
3. Function
4. Dates
*/

//<---------------------------- CODES NOW---------------------------->

// Primitive data type

//string
let nam = "Atul";
console.log("my string is " + nam);
console.log("Data type is " +(typeof nam)); 

// Numbers

let marks = 23;
console.log("my number is " + marks);
console.log("Data type is " +(typeof marks));

// Boolean

let isDriver = true;
console.log("Data type is " +(typeof isDriver));

// Null

let nullVar = null;
console.log("Data type is " +(typeof nullVar)); // return value of null is bogus 

// Undefined

let undef = undefined;
console.log("Data type is " +(typeof undef));


//<-------------------------- Reference data type------------------------>

// Arrays

myArr = [1, 2, 3, 4, false, "string"];
console.log("Data type is " +(typeof myArr));

// Object Literals

let stMarks = {
    harry: 34,
    Atul: 36,
    RohanDas: 56
}
console.log(stMarks);
console.log("Data type is " +(typeof stMarks));

// Function

function findName() {
    
}
console.log("Data type is " +(typeof findName));

// Date 

let date = new Date();
console.log("Data type is " +(typeof date));