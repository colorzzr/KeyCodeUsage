'use strict'

console.log('oct 15 - 3pm')

let right = false;

function moveCircle(){
	const circle = document.querySelector('#circle');
	if(!right){
		circle.style.left ="650px";	
		right = true;
	}
	else{
		circle.style.left ="40px";	
		right = false;
	}


}


setTimeout(function(){console.log('2 SECOND')}, 2000);

console.log('At timeout 1');