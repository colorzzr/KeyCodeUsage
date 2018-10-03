# DOM

Document Object Model

document.querySelector() <--- 选择第一个

document.querySelectorAll() <--- 选所有的

.parentElement() <--- 获取父级结构

# Dynamic adding element

const divy = document.createElement('div') <---创建div元素

divy.className = 'pos'

const newPostTitle = document.createTextNode('jaaaaaaaaaaaaaaaaaaava')

const newPostTitleContainer  = doucment.createElement('h3‘）

newPostTitleContainer.appendChild(newPostTitle)

然后再把东西append到已有的元素上
