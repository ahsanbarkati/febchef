--

sm a x y c=do
   
    let row=a!!y
    let p1=take x row
    let p2= drop (x+1) row
    let nrow=p1++[c `mod` 2]++p2
    --let tic=y++[c `mod` 2]++z
    let py1=take y a
    let py2=drop (y+1) a
    let final=py1++[nrow]++py2
    print (final!!0)
    print (final!!1)
    print (final!!2)
    let b = c+1
   
    print "Again??"
    x<-getLine
    y<-getLine
    

    if x=="x" then return() else sm final (read x::Int) (read y::Int) b
    
main=do
    let a=[[2,2,2],[2,2,2],[2,2,2]]
    x<-getLine
    y<-getLine
    sm a (read x::Int) (read y::Int) 0


