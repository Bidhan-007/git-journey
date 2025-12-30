//let btns=document.querySelectorAll("button");
// for (let i=1 ;i< btns.length;i++){
//  btns[i].addEventListener("click",()=>{
// btns[i].onclick= console.log("Button is clicked now :");
// })
// btns[i].addEventListener("mouseenter",()=>{
//    btns[i].onmouseenter= console.log("You Hover the Key :");
// })
// btns[i].addEventListener("dblclick",sayHello);
//  }

// function sayHello(){
//     alert("Hello");
// }

//RandomColorGenerator!
let btn=document.querySelector("button");
btn.addEventListener("click",()=>{
    let box=document.querySelector("div");
    box.style.backgroundColor=getRandomColor();
    box.innerText="Color choosed by Gaurav:";
})
btn.addEventListener("click",()=>{
    let h3=document.querySelector("h3");
    h3.innerText=getRandomColor();
})

function getRandomColor(){
    let red=Math.floor(Math.random()*255);
    let green=Math.floor(Math.random()*255);
    let blue=Math.floor(Math.random()*255);
    let color=`rgb(${red},${green},${blue})`;
    return color;
}


