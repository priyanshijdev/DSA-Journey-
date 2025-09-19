// Find the number of continuous 2 
// [2,2,4,2,4,2,2,4,4,2,2,2,4,2,2,4,2,4,4,2]
// continues 2 = 4 times

function countContinuousTwos(arr){
    let count=0;
    let isTrue=false;
    for(let i=0 ; i<arr.length; i++){
        if(arr[i] ==2){
            if(!isTrue && arr[i+1] ==2){
                count++;
                isTrue= true;
            }
        }else {
        isTrue= false;
        }
    }
    return count;
}

const arr = [2,2,4,2,4,2,2,4,4,2,2,2,4,2,2,4,2,4,4,2];
console.log(countContinuousTwos(arr)); // 4
