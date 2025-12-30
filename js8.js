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


