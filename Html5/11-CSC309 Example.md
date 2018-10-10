```
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title> Student QUeue</title>
  </head>
  <body>
    <form id = 'queueForm'>
      <input id = 'sName' type = 'text' name='student' placeholder = 'student'>
      <input id = 'sCourse type = 'text' name='course' placeholder = 'course'>
      <input type = 'submit' name = 'submit'>
    </form>
    
    <ul id = 'queue'>
    </ul>
```

```
'use strict'

const form = document.getElementById('queueForm')
const queue = document.getElementById('queue')

form.addEventListener('submit', addStudent)//function

//add student to queue
function addStudent(e){
  e.preventDefault(); //stop redirect
  
  //find the student field and course field
  const studentName = document.queueSelector('#sName').value;
  const studentCourse = document.queueSelector('#sCourse').value;
  
  //manipulate the test
  const studentText = `${studentName} - ${studentCourse}`
  
  //create new elemenet
  const listElement = documen.createElement('li');
  
  //add className
  listElement.className = 'student'
  
  //add text
  listElement.appendChild(document.createTextNode(studentText));
  
  //add remove button
  const removeButton = document.createElement('button')
  removeButton.className = 'remove'
  removeButton.appendChild(document.createTextNode('remove'))
  listElement.appendChild(removeButton)
  
  queue.appendChild(listElement)
}

queue.addEventListener('click', removeStudent)
  
function removeStudent(e){
  console.log('clicked!')
  
  //only trigger at remove button
  if(e.target.classList.contains('remove'){
    const sToRemove = e.target.parentElement
    queue.removeChild(sToRemove);
  }
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}

```
