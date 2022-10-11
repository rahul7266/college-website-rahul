


document.querySelector("button").addEventListener("click",dice);


function dice(){
    
    

var p1=Math.floor(Math.random()*6)+1;
var img1="./images/"+p1+".png";
var src1=document.querySelectorAll("img")[0];
src1.setAttribute('src',img1);


var p2=Math.floor(Math.random()*6)+1;
var img2="./images/"+p2+".png";
var src2=document.querySelector(".p2 img");
src2.setAttribute('src',img2);

if(p1>p2){
    document.querySelector("h1").innerHTML='Player 1 wins!!';
    
}
else if(p2>p1){
    document.querySelector("h1").innerHTML='Player 2 wins!!';
    
}
else{
    document.querySelector("h1").innerHTML='Its Draw!!';

}
}