int mdc(int x, int y){
    if(y == 0){
		return x;
    }else{
        return mdc(y, x % y);
    }
}