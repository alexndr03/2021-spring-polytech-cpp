#include <iostream>



/* 1.Комментарии не компенсируют плохого кода, лучше исправить код чем добавить кучу ненужных комментариев*/
/* 2.С помощью комментариев объясните свои намерения, что вы собираетесь сделать частью кода*/
/* 3.Помимо намерений, хорошим комментарием считается пояснения к коду или же предупреждения, а также Комментарии TODO:*/
/* 4.Не стоит лепить комментарии «на скорую руку» только потому, что вам кажется, что это уместно или этого требует процесс*/
/* 5.Не нужно добавлять избыточные комментарии*/
/* 6.Не стоит делать неточные заявления в комментариях*/
/* 7.Журнальные и обязательные комментарии  нагромождают код*/
/* 8."Шум" или же бесполезные комментарии, а также позиционные маркеры также вредят чистоте кода.*/
/* 9.Не используйте комментарии там, где можно
использовать функцию или переменную */
/* 10. Комментарии за закрывающей фигурной скобкой и ссылки на авторов загромождают компактные специализированные функции, которым мы отдает
        предпочтение.*/
/* 11. Лучше удалить ненужный код, чем комментировать его.*/
/* 12.Не включайте в комментарии интересные исторические дискуссии или описания подробностей, не относящиеся к делу*/
/* 13.Если вы должны написать комментарий, проследите за тем, чтобы он описывал
находящийся поблизости код. Не излагайте информацию системного уровня
        в контексте локального комментария*/
/* 14.HTML в комментариях к исходному коду выглядит отвратительно. Он затрудняет чтение комментариев именно там,
        где они должны легко читаться — в редакторе/IDE.
*/



//9)вот это массив который надо отправить
//const int asize=5;
//int A[asize];

const int SendArraySize=5;
int SendArray[SendArraySize];
//13)Есть функция которая делит этот массив



// 2) Эта фнукция делит все значения массива для отправки на x
// 3) !!!ОСТОРОЖНО НЕ ПЕРЕДАВАЙТЕ ФУНКЦИИ НОЛЬ!!!
// 6) Хотя можете поделить на ноль вроде компилятор все всеранво исправит
// 3) TODO: Сделать поддежку float делителей
//12) Интересная иcтория создания функции бла бла...
// 7) Журнальные коментарии уже не используются,так как есть гитхаб
void DivideTheArray(int x)
{
    /* 1)
    //Вот тут с помощью while все значения массива делятся на x
     int i=0;
     while(i<SendArraySize)
     {
        SendArray[i]/=x;
        i+=1;
     }
     */

    //5, 8) вот этот цикл проходит по всем значениям массива чтобы поделить их
    for(int i=0;i<SendArraySize;i++)
        //5, 8) Тут вот происходит деление
        SendArray[i]/=x;


}

int main() {
    std::cout << "Hello, World!" << std::endl;
}