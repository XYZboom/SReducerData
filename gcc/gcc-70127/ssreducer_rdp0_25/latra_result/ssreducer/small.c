 int   i         ;
        unsigned
                crc32_context
                ;
       void
transparent_crc (
        unsigned
                          val, char* vname )
{
 crc32_context =
              val
                                       ;
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
}
struct S0 {
        int
           f0;
   signed f1 : 22;
};
       struct S0 g_217[1]                       ;
        short
               g_1204 = 0x8491L;
       struct S0 g_1896 = {0x1C87E74FL, 816};
        unsigned
               func_14
                        (
                               p_16
                                   )  {
        struct S0 l_2620 = { 8L,666};
        for (p_16 = 0;            ; )
        {
                    for (;  g_1204      ; g_1204 += 1)
                        l_2620 =   (g_217[p_16] = g_1896)  ;
                         g_217[p_16] = l_2620 ;
    return  0
                             ;
        }
                                              }
int main (                      )
{
                                                                                                   func_14(           1    )                                              ;
    for (     ; i < 1; i++)
        transparent_crc(g_217[i].f1, "g_217[i].f1" );
}
