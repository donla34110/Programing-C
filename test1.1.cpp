/*
#include <stdio.h>

void ask_question(
				const char* question, 
				const char* option1,
				const char* option2, 
				const char* option3, 
				const char* option4, 
				const char corrent_answers){
						char answers;
						printf("%s\n",question);
						printf("a) %s\n",option1);
						printf("b) %s\n",option2);
						printf("c) %s\n",option3);
						printf("d) %s\n",option4);
						
						printf("Enter your answers a/b/c/d/: ");
						scanf(" %c",&answers);
						
						if (answers == corrent_answers){
							printf("Corrent!\n");
						}else {
							printf("InCorrent. The corrent answers is: %c\n",corrent_answers);
						}
						printf("\n");
}
int main(){
	ask_question(
		"1. How often does Peter go to the swimming pool? – He _____ to the swimming pool every day. He likes swimming.",		
		"goes", "is going", "has gone", "has been going",
		'a'
	);
	ask_question(
        "2. When is the best time to call you? – I usually _____ till nine in the evening. Call me around ten, if you can.",
        "work", "am working", "have worked", "have been working",
        'a'
    );

    ask_question(
        "3. Let's ask Anna to make apple pie for dessert. She _____ great apple pies.",
        "makes", "is making", "has made", "has been making",
        'a'
    );

    ask_question(
        "4. Please be quiet. My children _____ now.",
        "sleeping", "are sleeping", "have slept", "have been sleeping",
        'b'
    );

    ask_question(
        "5. The sun _____ in the east.",
        "rises", "is rising", "has risen", "has been rising",
        'a'
    );

    return 0;
	
	
}
*/			
#include <stdio.h>

void ask_all_questions() {
    char answer;

    // คำถามที่ 1
    printf("1. How often does Peter go to the swimming pool? – He _____ to the swimming pool every day. He likes swimming.\n");
    printf("a) goes\n");
    printf("b) is going\n");
    printf("c) has gone\n");
    printf("d) has been going\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);
    if (answer == 'a') {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is: a\n");
    }
    printf("\n");

    // คำถามที่ 2
    printf("2. When is the best time to call you? – I usually _____ till nine in the evening. Call me around ten, if you can.\n");
    printf("a) work\n");
    printf("b) am working\n");
    printf("c) have worked\n");
    printf("d) have been working\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);
    if (answer == 'a') {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is: a\n");
    }
    printf("\n");

    // คำถามที่ 3
    printf("3. Let's ask Anna to make apple pie for dessert. She _____ great apple pies.\n");
    printf("a) makes\n");
    printf("b) is making\n");
    printf("c) has made\n");
    printf("d) has been making\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);
    if (answer == 'a') {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is: a\n");
    }
    printf("\n");

    // คำถามที่ 4
    printf("4. Please be quiet. My children _____ now.\n");
    printf("a) sleeping\n");
    printf("b) are sleeping\n");
    printf("c) have slept\n");
    printf("d) have been sleeping\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);
    if (answer == 'b') {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is: b\n");
    }
    printf("\n");

    // คำถามที่ 5
    printf("5. The sun _____ in the east.\n");
    printf("a) rises\n");
    printf("b) is rising\n");
    printf("c) has risen\n");
    printf("d) has been rising\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);
    if (answer == 'a') {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is: a\n");
    }
    printf("\n");
}

int main() {
    ask_all_questions();
    return 0;
}
			
					
					
