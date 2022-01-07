// JavaScrip type conversion and Coercion

// <---------------------Type Conversion-------------------------->
let myVar;
//myVar = 34;
myVar = String(34);
//console.log(myVar, (typeof myVar));

let booleanVar = String(true);
console.log(booleanVar, (typeof booleanVar));

let date = new Date();
console.log(date, (typeof date));

let arr = String([1,2,3,4]);
console.log(arr.length, (typeof arr)); // the reason behind the conversion of the arr into string is that you can perform the all string function on that array.

// ***Note-----> we use above code statement to find the character in that string.


//----------------But---------------------->
//Here we firn the length of ht e array.

let arr1 = [1,2,3,4];
console.log(arr1.length, (typeof arr1));

// toString method

let i = 8;
console.log(i.toString()); // so here we can convert the number in to string with the help of toString method.

// Number Function

let sTri = "5363"; // so here if we want to convert this digits into number then we use number function.
//let sTri1 = Number("5363");
//console.log(sTri, (typeof sTri));
//console.log(sTri1, (typeof sTri1));

let sTri1 = Number("536d3"); // So here we he try to convert this digits then he found that what is this d in between digit 6 and 3, so that he print a message which is NaN(Not a number); ***And one more thing is that if we give any string and array to convert in to number he return the NaN value.***
console.log(sTri1, (typeof sTri1));

// ParseInt and ParseFloat

let number1 = parseInt('34.457');
console.log(number1, (typeof number1));

let number2 = parseFloat('34.647');
console.log(number2, (typeof number2));

 // toFixed method

 let number3 = parseFloat('34.6476746754');
console.log(number3.toFixed(6), (typeof number3)); // Basically here i use toFixed method to fixe the digit after the decimal like how may digits we want to print after the decimal like 3 or 4 or 7 etc.

// <---------------------Type Coercion-------------------------->
let myStr = ("683");
let myStr1 = Number("683"); // here shows the type coercion.
let myNum = 34;
console.log(myStr + myNum);
console.log(myStr1 + myNum);