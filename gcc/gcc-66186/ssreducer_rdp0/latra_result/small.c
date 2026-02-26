                 int    i;
        int
               g_2
                   ,
               g_1600
                             ;
        short
               func_89(
        signed
                                  ,
        signed
                                                     ,
        signed
                                                                          );
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
    return g_2;
                                            }
         signed
              func_29
                        (
                              p_30
                                   )  {
                                              }
        unsigned
                func_55(
        signed
                               p_56,
        unsigned
                                                    p_57,
        unsigned
                                                                   p_58)
{
        if (                                                                                                                                                                                                                                                                                              func_89(                              0x9A5DL , g_2, p_57  )                                                                                                                                                                           )
        {
            }
    return        0    ;
}
        short
               func_89(
        signed
                              p_90,
        signed
                                                 p_91,
        signed
                                                                    p_92  )
{
        int
            l_103 =  -7L ;
        signed
           l_267 = 0xA3L;
    if (                                       func_97(                                                          0x34L                                                                                                                                                                                                                                                                                                                                                                                                                                && 4294967287UL                  , l_103, g_2 )                                           )
    {
        }
    return l_267;
}
int main ()
{
        int
            l_45 = 0x57638FF4L;
                                               func_29(                                                                                                                                                                                                                              func_55(                                                        g_2                                                                                                                                                                                                 , l_45, g_2)                                                                     )                                         ;
}
