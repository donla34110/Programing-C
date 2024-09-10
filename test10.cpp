#include <stdio.h>

void ask_all_questions() {
    char answer1, answer2, answer3, answer4, answer5;
    int correctAnswers = 0;
    int incorrectAnswers = 0;

    // ???????? 1
    printf("1. How often does Peter go to the swimming pool? – He _____ to the swimming pool every day. He likes swimming.\n");
    printf("a) goes\n");
    printf("b) is going\n");
    printf("c) has gone\n");
    printf("d) has been going\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer1);
    if (answer1 == 'a') {
        correctAnswers++;
    } else {
        incorrectAnswers++;
    }

    // ???????? 2
    printf("2. When is the best time to call you? – I usually _____ till nine in the evening. Call me around ten, if you can.\n");
    printf("a) work\n");
    printf("b) am working\n");
    printf("c) have worked\n");
    printf("d) have been working\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer2);
    if (answer2 == 'a') {
        correctAnswers++;
    } else {
        incorrectAnswers++;
    }

    // ???????? 3
    printf("3. Let's ask Anna to make apple pie for dessert. She _____ great apple pies.\n");
    printf("a) makes\n");
    printf("b) is making\n");
    printf("c) has made\n");
    printf("d) has been making\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer3);
    if (answer3 == 'a') {
        correctAnswers++;
    } else {
        incorrectAnswers++;
    }

    // ???????? 4
    printf("4. Please be quiet. My children _____ now.\n");
    printf("a) sleeping\n");
    printf("b) are sleeping\n");
    printf("c) have slept\n");
    printf("d) have been sleeping\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer4);
    if (answer4 == 'b') {
        correctAnswers++;
    } else {
        incorrectAnswers++;
    }

    // ???????? 5
    printf("5. The sun _____ in the east.\n");
    printf("a) rises\n");
    printf("b) is rising\n");
    printf("c) has risen\n");
    printf("d) has been rising\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer5);
    if (answer5 == 'a') {
        correctAnswers++;
    } else {
        incorrectAnswers++;
    }

    // ??????????????????
    printf("\nSummary of your answers:\n");
    
    if(answer1== 'a'){
    	printf("1. Correct - How often does Peter go to the swimming pool? – He goes to the swimming pool every day. He likes swimming.\n");
    	printf("Your answers : goes\n");
    	
    }else{
    	printf("1. Incorrect - How often does Peter go to the swimming pool? \n ");
    	if (answer1 == 'b')printf("your incorrect :is going\n");
    	else if (answer1 == 'c')printf("your incorrect : has gone\n");
    	else if (answer1 == 'd')printf("your incorrect : has been going\n");
    
    	printf("Correct answer: goes\n");
    } 
	    
	    printf("\nTotal correct answers: %d out of 5\n", correctAnswers);
    printf("Total incorrect answers: %d out of 5\n", incorrectAnswers);
	    
	    
	    
	    
	    
}
int main(){
	ask_all_questions();
	
	return 0;
}




