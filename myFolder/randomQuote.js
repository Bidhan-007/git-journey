let btn=document.querySelector("button");
let box=document.querySelector("div");
let api="https://api.quotable.io/random";
fetch(api)
.then((value)=>{
// return value.json();
return (value.json());
})
.then((value)=>{
console.log(value.data);
})
.catch((err)=>{
    console.log("Error Occured");
})
btn.addEventListener(onclick,()=>{
   
})