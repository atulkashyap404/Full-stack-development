// Strings : Properties, Methods & Template Literals in JavaScript

let name1 = 'Atul ';
const greeting = 'Good Morning';
console.log(name1 + greeting); // + is use to string concatenation.

// String Function (important)

// 1. Concat()

let sTr1 = "Hi this is string ";
let sTr2 = "HI THIS IS STRING ";
let sTr3 = "Hi this is string";
sTr1 = sTr1.concat('concatenation ', ' here');
console.log(sTr1);

// 2. length()

console.log(sTr1.length);

// 3. toLowerCase()

console.log(sTr2.toLowerCase());

// 4. toUpperCase()

console.log(sTr3.toUpperCase());

// 5. indexOf()

console.log(sTr2.indexOf('IS'));
console.log(sTr2.indexOf('ISgsdfjs'));// if we put non relate string data then it shows you -1.

// 6. lastIndexOf()

console.log(sTr2.lastIndexOf('I'));

// 7. charAt()

console.log(sTr2.charAt(1));// you can put any index value to check which later at which index.

// 8. endsWith()

console.log(sTr3.endsWith('string'));

// 9. includes

console.log(sTr2.includes('jjdhbgf'));
console.log(sTr3.includes('is'));

// 10. substring()

console.log(sTr3.substring(0,5));

// 11. slice

console.log(sTr3.slice(-6));

console.log(sTr3.slice(0, 6));

// 12. split()

console.log(sTr3.split(' '));// return the array of your string.

// 13. replace()

console.log(sTr3.replace('this', ' that')); // replace the first occurrence not all.for ex(if in that sentence contain 2 this then replace change only first this not second one this ohk).

//<---------------------------Template Literals---------------------------->

let fruit1 = 'Orange';
let fruit2 = 'Apple';

let myHtml = `Hello ${name1}
<h1>This is Heading</h1>
<p>You like ${fruit1} and ${fruit2}</p>
`;
document.body.innerHTML = myHtml;