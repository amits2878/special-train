bool streq_n(const char* s1, const char* s2, int nch) {
	while ( *s1 != 0 && *s2 != 0 && nch)
	    if ( *s1++ != *s2++) {
		nch--;
		return false;
	    }
	return (*s1 == *s2);
}
