    int  i
                ;
        int
               g_2
                   ,
               g_1600
                             ;
        unsigned
                func_97
                (
        unsigned
                                  p_99,
        unsigned short
                                                 p_100,
        unsigned
                                                                 p_101
                               )  {
        short
            l_125[8];
    for (     ; i < 8; i++)
        l_125[i] =   6L ;
    for (;  p_99 <= 7 ; p_99 += 1)
    {
        for (p_101 = 0;  p_101 <= 7 ; )
        {
            if (  g_1600 < 0  )
        for (;  p_101 <= 7 ; p_101 += 1)
            if (l_125[p_100])
                break;
if (l_125[p_99])
                break;
        }
    }
  return
                                          32
                             ;
                                            }
        short
               func_89(
        )
{
        int
            l_103 =  -7L ;
    if (                                       func_97(            1  , l_103, g_2 )                                           );
  return
                                          32
                             ;
}
int main ()
{
        if (                                                                                                                                                                                                      func_89(                )                                                                                                                                                                                       );
}
