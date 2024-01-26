double maxEle (double mArr[], int lenM) {
	int cnt = 0;
	while (mArr[cnt] && cnt < lenM) {
	    if (mArr[cnt] > mArr[cnt+1]) {
		    double temp = mArr[cnt];
		    mArr[cnt] = mArr[cnt+1];
		    mArr[cnt+1] = temp;
	    }
	    cnt++;
	}
	return mArr[cnt];
}

