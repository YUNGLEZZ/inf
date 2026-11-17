//ВАРИАНТ 4, НА "ОТЛИЧНО"
#include <stdio.h>
int main(void) {
    int cpu_state[8] = {0};
    int memory[256] = {0};
    int a, k = 0;
    while(scanf("%d", &a)==1) {
        memory[k] = a;
        k++;
    }
    cpu_state[0] = 0;
    cpu_state[1] = 0;
    cpu_state[2] = 0;
    cpu_state[3] = 0;
    cpu_state[4] = 0;
    cpu_state[5] = 0;
    cpu_state[6] = 0;
    cpu_state[7] = 0;
    while(cpu_state[4]==0) {
        cpu_state[2] = memory[cpu_state[0]];
        cpu_state[0]++;
    } 
    switch(cpu_state[2]) {
        case 0:
        cpu_state[4] = 1;
        break;
        case 1:
        printf("Вывести значение аккумулятора экран | %d\n", cpu_state[1]);
        break;
        case 2:
        cpu_state[1] = 
    
    }
    return 0;
}