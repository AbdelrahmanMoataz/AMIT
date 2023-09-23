// #################################################### Function Definition #############################################################
int stringLength(char *input){
	int i = 0;
	char character = 'a'; // if left unassigned, will default to null terminator
	while(character != '\0'){
		character = input[i];
		i++;
	}
	return i;
}

void stringCopy(char *input, char *copy)
{
	int i;
	for(i = 0; i < stringLength(copy) - 1; i++) // if we want it to overwrite, don't use -1 so null terminator comes 
	{											// early in case we copy small to large (rest of characters are garbage)
		input[i] = copy[i];
	}
}


void stringAppend(char *input, char *append){
	int i = 0;
	int index = stringLength(input) - 1; // find the null terminator of input
	char append_char = 'a';
	while(append_char != '\0'){
		input[index] = append[i];
		append_char = append[i];
		i++;
		index++;
	}
}


int stringCompare(char *input1, char *input2){
	int i = 0;
	char char1 = input1[i];
	char char2 = input2[i];
	while(char1 != '\0'){ // terminate loop when char1 (or char2, doesn't matter) reaches null terminator
		i++;
		char1 = input1[i];
		char2 = input2[i];
		if(char1 != char2) // if at any point they are not equal to each other, return 0
			return 0;
	}
	return 1;
	
}
