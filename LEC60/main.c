#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //PREDEFINED MACROS IN C
    //! (1) __FILE__
    printf("File name is %s\n",__FILE__);


    //! (2) __DATE__
    printf("Today's Date is %s\n",__DATE__);


    //! (3) __TIME__
    printf("Time is %s\n",__TIME__);


    //! (4) __LINE__
    printf("Line no. is %d\n",__LINE__);

    
    //! (4) __STDC__
    printf("ANSI: %d\n",__STDC__);
    
    //? 1 = true 
    //? 0 = false
    return 0;
}