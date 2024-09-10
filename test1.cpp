#include <stdio.h>

void ask_question(
				const char* question, 
				const char* option1, 
				const char* option2, 
				const char* option3, 
				const char* option4, 
				char correct_answer) {
    			char answer;

    printf("%s\n", question);
    printf("a) %s\n", option1);
    printf("b) %s\n", option2);
    printf("c) %s\n", option3);
    printf("d) %s\n", option4);

    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);  // ??? " %c" ?????????????????????????????????????????????

    if (answer == correct_answer) {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is: %c\n", correct_answer);
    }
    printf("\n");
}

int main() {
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

