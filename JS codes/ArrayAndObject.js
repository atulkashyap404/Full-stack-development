//Array and Objects in Java Script.

let marks1 = [23, 34, 56, 76, 92,];
const marks = [23, 34, 56, 76, 92,];
const fruTs = ['orange', 'apple', 'pineapple', 'mango'];
const miXed = ['str', 34, [97, 34], 34, 'atul'];

const arr = new Array(23, 54, 345,'orange');

console.log(typeof arr);
console.log(miXed);
console.log(arr);
console.log(arr.length);
console.log(Array.isArray(arr));
console.log(Array.isArray('str'));

// changing Array

arr[0] = 'Atul';
console.log(arr);
 let arrElement = arr[0];
 console.log('element :', arrElement);

// IndexOf
let value = marks.indexOf(76);
console.log(marks);
console.log(value);

// Mutating or Modifying arrays
marks.push(90);// buy pushing this element it will be added at the end of array index.
marks.unshift(878); // here a use unshift to add the element at the starting point.
console.log(marks);

marks.pop(); //we use this to removing the element from the end of the array index.
console.log(marks);

marks.shift() // shift is use to remove the element from the starting of the array index.
console.log(marks);

marks.splice(1, 2); // so basically we use this to removing the element from index like if you want to remove element from index 1 to 3 then put this value in splice bracket.(it not removing the element of 1 after 1 count 3 and that element will remove from the index).
console.log(marks);

marks.reverse();// we use this to reverse the array.
console.log(marks);

let marks2 = [1,2,3,4];
marks1 = marks1.concat(marks2);
console.log(marks1);

//<-------------------------Objects------------------------>

let myObj = {
    name1:'Atul',
    channel: 'kmg',
    isActive: true,
    marks0: [23, 45, 65,76]
}

console.log(myObj);
console.log(myObj.name1);
console.log(myObj.isActive);
console.log(myObj.marks0);

