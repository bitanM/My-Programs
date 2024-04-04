// Making a simple Shopping list 

/*	HTML template
<!DOCTYPE html>
<html lang="en-US">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Shopping list example</title>
    <style>
      li {
        margin-bottom: 10px;
      }

      li button {
        font-size: 12px;
        margin-left: 20px;
        color: #666;
      }
    </style>
  </head>
  <body>

    <h1>My shopping list</h1>
<!--
    <div>
      <label for="item">Enter a new item:</label>
      <input type="text" name="item" id="item">
      <button>Add item</button>
    </div>

    <ul>

    </ul>
-->
    <script>
    </script>
  </body>
</html>
*/

document.addEventListener('DOMContentLoaded', () => {
//let list = document.querySelector('ul');
let list = document.createElement('ul');
//let inp = document.querySelector('input');
let inp = document.createElement('input');
//let btn = document.querySelector('button');
let btn = document.createElement('button');
let div = document.createElement('div');
div.appendChild(inp);
div.appendChild(btn);
inp.placeholder = "Enter a new item:";
btn.textContent = "Add item";
document.body.appendChild(div);
document.body.appendChild(list);
btn.addEventListener('click', () => {
      const list_inp = inp.value
      inp.value = '';
      let new_list = document.createElement('li');
      let span = document.createElement('span');
      let button = document.createElement('button');
      new_list.appendChild(span);
      new_list.appendChild(button);
      span.textContent = list_inp;
      button.textContent = 'Delete';
      list.appendChild(new_list);
      button.addEventListener('click', () =>
                             { list.removeChild(new_list); }
                             );
      inp.focus();
      });
  });
