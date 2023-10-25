// Online Javascript Editor for free
// Write, Edit and Run your Javascript code using JS Online Compiler

function arrayFilter(arr,begin,end){
    let sum=0;
    while(begin<=end){
        sum+=arr[begin-1];
        begin+=1;
    }
    return sum;
}
function theNumberCanBeMadeWithTheArray(arr,number){
        let rept=0;
        if(arr.length%2===0){
              rept= arr.length/2
        }
        else{
            rept= Math.ceil((arr.length/2))-1
        }
        let counter=rept
        for(let i=1;i<=rept;i++){
            let j=rept+i;
            let sum=0;
            console.log("cc: ",arr[counter],"jj: ",arr[j])
            if(counter>=0){
                sum=arrayFilter(arr,counter,j);
                counter-=1;
            }
            if(sum==number){
                return "true";
            }
        }
        return "false";
    }
    
let arr=[1,0,0,0,7,6,1,0,0,0]
console.log("arr length",arr.length)
console.log(theNumberCanBeMadeWithTheArray(arr,15))
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    