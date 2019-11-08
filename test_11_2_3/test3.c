char *my_strcpy(char *dest, const char *src){
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while ((*dest++ = *src++)){
		;
	}
	return ret;
}