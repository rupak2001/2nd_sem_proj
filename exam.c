#include<stdio.h>
#include <stdlib.h>


void exam_pg_mcq(int choice){
    //mcq questions
    char* q_jee[] = {"An object is placed at 20 cm in front of a concave mirror produces three times magnified real image. What is the focal length of the concave mirror?"," A  metal ball immersed in alcohol weighs W1 at 0°C and W2 at 50°C. The coefficient of expansion of cubical the metal is less than that of the alcohol. Assuming that the density of the metal is large compared to that of alcohol, it can be shown that "," Wurtz reaction involves the reduction of alkyl halide with "," The number of positive integers which can be formed by using any number of digits from 0, 1, 2, 3, 4, 5 but using each digit not more than once in each number, is "," Ten different letters of an alphabet are given. Words with five letters are formed from these given letters. Then the number of words which have at least one letter repeated are"};
    char* q_neet[] = {"Which of the following organisms multiply by fragmentation? ","Who is also called the “Darwin of the 20th century”? "," Force of 50 N acting on a body at an angle θ with horizontal. If 150 J work is done by displacing it 3 m, then θ is","Decarboxylation of sodium propionate leads to the formation of ","Which of the following will increase with the increase in temperature? "};
    char* q_upsc[] = {"Consider the following statements about BIMSTEC:\n1.It is a regional organisation comprising South Asian countries only.\n2. The Secretariat of BIMSTEC is located at Dhaka, Bangladesh. Which of the statements given above is/are correct?"," Consider the following statements regarding Emergency Credit Line Guarantee Scheme (ECLGS):\n1. The scheme is not extended to MUDRA borrowers.\n2. SIDBI is the guarantee provider under the ECLGS scheme.\n3. Recently, business enterprises under the Tourism and Hospitality sectors have also been included under the ECLGS scheme. Which of the statements given above is/are not correct?","With reference to Prime Minister’s Kisan Urja Suraksha Evam Utthan Mahabhiyan (PM-KUSUM) scheme, consider the following statements: \n1. The PM-KUSUM scheme was launched by the Ministry of Agriculture and Farmers’ Welfare. \n2. It focuses only on providing standalone solar-powered agriculture pumps.. Which of the statements given above is/are correct ?  ","With reference to Current Account Deficit (CAD), consider the following statements:\n1. Current account records exports and imports in goods and services only. \n2. CAD can be reduced by curbing non-essential imports such as gold, mobiles, and electronics. Which of the statements given above is/are correct ? ","'Persistent Viral Shedding' was in the news, it is a condition of- "};

    //mcq answers
    char* a_jee[] = {"a)15 cm\t\tb)10 cm\nc)6.6 cm\td)7.5 cm","a)W1>W2\t\tb)W1=W2\nc)W1<W2\t\td)None of these","a)Zn/HCl\tb)HI\nc)Zn/Cu couple\td)Na in ether","a)1200\t\tb)1500\nc)1600\t\td)1630","a)69760\t\tb)30240\nc)99748\t\td)None of these"};
    char* a_neet[] = {"a)fungi\t\tb)filamentous algae\nc)planaria\td)all of the above","a)Lamarck\t\tb)Ernst Mayr\nc)Carolus Linnaeus\td)Robert May","a)60°\tb)30°\nc)0°\td)45°","a)methane\tb)ethene\nc)propanone\td)ethane","a)Surface Tension\tb)Viscosity\nc)Molality\t\td)Vapour pressure"};
    char* a_upsc[] = {"a)1 only\tb)2 only\nc)Both 1 and 2\td)Neither 1 nor 2","a)1 and 2 only\tb)2 only\nc)3 only\td)None","a)1 only\tb)2 only\nc)Both 1 and 2\td)Neither 1 nor 2","a)1 only\tb)2 only\nc)Both 1 and 2\td)Neither 1 nor 2","a)Full Immunity developed against the virus.\t\tb)A special type of viral infection developed in Old age people\nc)Recovered patients continue to carry some of virus within their system\td)When recovered patients are not affected again by the virus already infected."};


    char arr[5];

    switch(choice){
        case 1:
        for(int i = 0;i<5;i++){
            printf("Q%d: %s\n\n",i+1,q_jee[i]);
            printf("Choose between 4 options:\n%s\n\n",a_jee[i]);
            printf("Your answer: ");
            char c;
            scanf(" %c",&c);
            arr[i] = c;
            if((int)arr[i]>64&&(int)arr[i]<91){
                arr[i] = (char)((int)arr[i]+32);
            }

            if((int)c>64&&(int)c<91){
                c = (char)((int)c+32);
            }

            int flag = 0;

            while(flag != 1){
                if((int)c>=97&&(int)c<=100){
                    flag = 1;
                }
                else{
                    printf("Enter choice between (a<->d) !!!\n\n");
                    printf("Your answer: ");
                    scanf(" %c",&c);
                    arr[i] = c;
                    if((int)arr[i]>64&&(int)arr[i]<91){
                        arr[i] = (char)((int)arr[i]+32);
                    }
                }
            }
            printf("\n");
        }
        res(choice,1,arr);
        break;

        case 2:
        for(int i = 0;i<5;i++){
            printf("Q%d: %s\n\n",i+1,q_neet[i]);
            printf("Choose between 4 options:\n%s\n\n",a_neet[i]);
            printf("Your answer: ");
            char c;
            scanf(" %c",&c);
            arr[i] = c;
            if((int)arr[i]>64&&(int)arr[i]<91){
                arr[i] = (char)((int)arr[i]+32);
            }

            if((int)c>64&&(int)c<91){
                c = (char)((int)c+32);
            }

            int flag = 0;

            while(flag != 1){
                if((int)c>=97&&(int)c<=100){
                    flag = 1;
                }
                else{
                    printf("Enter choice between (a<->d) !!!\n\n");
                    printf("Your answer: ");
                    scanf(" %c",&c);
                    arr[i] = c;
                    if((int)arr[i]>64&&(int)arr[i]<91){
                        arr[i] = (char)((int)arr[i]+32);
                    }
                }
            }
            printf("\n");
        }
        res(choice,1,arr);
        break;

        case 3:
        for(int i = 0;i<5;i++){
            printf("Q%d: %s\n\n",i+1,q_upsc[i]);
            printf("Choose between 4 options:\n%s\n\n",a_upsc[i]);
            printf("Your answer: ");
            char c;
            scanf(" %c",&c);
            arr[i] = c;

            if((int)arr[i]>64&&(int)arr[i]<91){
                arr[i] = (char)((int)arr[i]+32);
            }

            if((int)c>64&&(int)c<91){
                c = (char)((int)c+32);
            }

            int flag = 0;

            while(flag != 1){
                if((int)c>=97&&(int)c<=100){
                    flag = 1;
                }
                else{
                    printf("Enter choice between (a<->d) !!!\n\n");
                    printf("Your answer: ");
                    scanf(" %c",&c);
                    arr[i] = c;
                    if((int)arr[i]>64&&(int)arr[i]<91){
                        arr[i] = (char)((int)arr[i]+32);
                    }
                }
            }
            printf("\n");
        }
        res(choice,1,arr);
        break;
    }
}

void exam_pg_tf(int choice){
    //tf questions
    char* q_jee[] = {"The properties of solids can be explained by the structure of and the bonding among the metal atoms."," Inertia is a vector quantity. It has both magnitude and direction."," Mass and weight are the same."," The slope of a vertical line is undefined."," Two lines with positive slopes can be perpendicular."};
    char* q_neet[] = {"Rhizopus is also called bread mould."," After pollination, Pollen Grain reach stem tip for fertilization."," Formation of manure from leaves is a physical change."," Condensation of steam is not a chemical change."," Bar magnets always point towards the North−South direction."};
    char* q_upsc[] = { "The five rings on the Olympic flag are interlocking?","Mount Kilimanjaro is the highest mountain in the world?", "Strictly Come Dancing first aired in the UK in 2005?","A group of swans is known as a bevy?","Sydney is the capital of Australia?"};
    

    char arr[5];

    switch(choice){
        case 1:
        for(int i = 0;i<5;i++){
            printf("Q%d: %s\n\n",i+1,q_jee[i]);
            printf("Enter 't' for true or 'f for false\n\n");
            printf("Your answer: ");
            char c;
            scanf(" %c",&c);
            arr[i] = c;

            if((int)arr[i]>64&&(int)arr[i]<91){
                arr[i] = (char)((int)arr[i]+32);
            }

            if((int)c>64&&(int)c<91){
                c = (char)((int)c+32);
            }
            
            int flag = 0;

            while(flag != 1){
                if(c == 't'||c=='f'){
                    flag = 1;
                }
                else{
                    printf("Enter choice between (t/f) !!!\n\n");
                    printf("Your answer: ");
                    scanf(" %c",&c);
                    arr[i] = c;
                    if((int)arr[i]>64&&(int)arr[i]<91){
                        arr[i] = (char)((int)arr[i]+32);
                    }
                }
            }
            printf("\n");
        }
        res(choice,2,arr);
        break;
        
        case 2:
        for(int i = 0;i<5;i++){
            printf("Q%d: %s\n\n",i+1,q_neet[i]);
            printf("Enter 't' for true or 'f for false\n\n");
            printf("Your answer: ");
            char c;
            scanf(" %c",&c);
            arr[i] = c;

            if((int)arr[i]>64&&(int)arr[i]<91){
                arr[i] = (char)((int)arr[i]+32);
            }

            if((int)c>64&&(int)c<91){
                c = (char)((int)c+32);
            }
            
            int flag = 0;

            while(flag != 1){
                if(c == 't'||c=='f'){
                    flag = 1;
                }
                else{
                    printf("Enter choice between (t/f) !!!\n\n");
                    printf("Your answer: ");
                    scanf(" %c",&c);
                    arr[i] = c;
                    if((int)arr[i]>64&&(int)arr[i]<91){
                        arr[i] = (char)((int)arr[i]+32);
                    }
                }
            }
            printf("\n");
        }
        res(choice,2,arr);
        break;

        case 3:
        for(int i = 0;i<5;i++){
            printf("Q%d: %s\n\n",i+1,q_upsc[i]);
            printf("Enter 't' for true or 'f for false\n\n");
            printf("Your answer: ");
            char c;
            scanf(" %c",&c);
            arr[i] = c;

            if((int)arr[i]>64&&(int)arr[i]<91){
                arr[i] = (char)((int)arr[i]+32);
            }

            if((int)c>64&&(int)c<91){
                c = (char)((int)c+32);
            }
            
            int flag = 0;

            while(flag != 1){
                if(c == 't'||c=='f'){
                    flag = 1;
                }
                else{
                    printf("Enter choice between (t/f) !!!\n\n");
                    printf("Your answer: ");
                    scanf(" %c",&c);
                    arr[i] = c;
                    if((int)arr[i]>64&&(int)arr[i]<91){
                        arr[i] = (char)((int)arr[i]+32);
                    }
                }
            }
            printf("\n");
        }
        res(choice,2,arr);
        break;
    }
}

int res(int sub,int type, char arr[]){
    char *mcqa[3][5] = {{'a','c','d','d','a'},{'d','b','c','d','d'},{'b','a','d','b','c'}};
    char *tfa[3][5] = {{'t','f','f','t','f'},{'t','f','f','t','t'},{'t','f','f','t','f'}};

    int result = 0;
    printf("\n***********************************************EVALUATION REPORT***********************************************************\n\n");
    printf("\nANSWER KEY\n\n");
    switch(type){
        case 1:
        printf("Type: MCQ\n");
        
        if(sub == 1){
            printf("Test Name: JEE\n");
        }
        else if(sub == 2){
            printf("Test Name: NEET\n");
        }
        else if(sub == 3){
            printf("Test Name: UPSC\n");
        }
        printf("\n");
        for(int i = 0;i<5;i++){
            if(mcqa[sub-1][i] == arr[i]){
                printf("Q.no: %d\nyour answer: %c\tcorrect answer: %c\nstatus: correct\n\n",i+1,arr[i],mcqa[sub-1][i]);
                result+=5;
            }
            else{
                printf("Q.no: %d\nyour answer: %c\tcorrect answer: %c\nstatus: incorrect\n\n",i+1,arr[i],mcqa[sub-1][i]);
            }
        }
        break;
        
        case 2://tf
        printf("Type: True & False\n");
        
        if(sub == 1){
            printf("Test Name: JEE\n");
        }
        else if(sub == 2){
            printf("Test Name: NEET\n");
        }
        else if(sub == 3){
            printf("Test Name: UPSC\n");
        }

        printf("\n");
        for(int i = 0;i<5;i++){
            if(tfa[sub-1][i] == arr[i]){
                printf("Q.no: %d\nyour answer: %c\tcorrect answer: %c\nstatus: correct\n\n",i+1,arr[i],tfa[sub-1][i]);
                result+=5;
            }
            else{
                printf("Q.no: %d\nyour answer: %c\tcorrect answer: %c\nstatus: incorrect\n\n",i+1,arr[i],tfa[sub-1][i]);
            }
        }
        break;
    }
    printf("\n***********************************************Result*****************************************************\n");

    printf("You have got : %d / 25 \n",result);

    if(result == 25){
        printf("Remark: EXCELLENT\n");
    }
    else if(result<25&&result>=15){
        printf("Remark: GOOD\n");
    }
    else{
        printf("Remark: NEED TO STUDY MORE\n");
    }

}

int main(){
    //driver

    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | BACKGROUND_GREEN);
	printf("################################\t WELCOME TO EXAMMATE \t################################\n");
	printf("\n\t\t\t\t\tThe Buddy for Your Exam\t\n");
	printf("###########################################################################################");
	int ch;
	printf("\nwhat do you want to do ?\n");
	printf("\n1. press 1 to continue\n");
	printf("\n2.press 2 to exit\n");
    printf("\nYou can also press any other key to see 'about us' page :)\n\n");
	printf("\nenter your choice: ");
	scanf("%d",&ch);
    int type,extype;
	switch(ch)
	{
		case 1:
			printf("\nwhich type of questions you want to attain:\nenter '1' for mcq\nenter '2' for true & false\n");
            printf("Your choice: ");
            scanf("%d",&type);
            printf("\nChoose the exam type\nenter '1' for JEE\nenter '2' for NEET\nenter '3' for UPSC");
            printf("\nYour choice: ");
            scanf("%d",&extype);
			break;
		case 2:
			printf("\nHave a Good Day\n");
            exit(0);
        default:
            printf("\n******SIMPLE EXAMINATION SYSTEM ON C LANGUAGE*****\n");
            printf("\n*****Behind the work...*****\n");
            printf("\n/////Snigdham Roy/////\n");
            printf("\n/////Sayoni Banerjee/////\n");
            printf("\n/////Rupak Biswas/////\n");
            printf("\n/////Ditipriya Roy/////\n");
            printf("\n/////Ushasee Sen/////\n");
            printf("\n*****CSE-1*****\n");
            printf("\n***** Thank You ;) *****\n");
            printf("");
            exit(0);
	}

    if(extype>3 && extype<1){
        printf("WRONG CHOICE!!!");
        printf("");
        exit(0);
    }

    printf("*************************************************************************************************************\n\n");

    switch(type){
        case 1:
        exam_pg_mcq(extype);
        break;

        case 2:
        exam_pg_tf(extype);
        break;

        default:
        printf("WRONG CHOICE!!!");
    }
}
	
