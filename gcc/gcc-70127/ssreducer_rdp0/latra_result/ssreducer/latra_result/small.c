 int        i    ;
        unsigned
                crc32_context
                ;
struct S0 {
        int
           f0;
   signed f1 : 22;
};
       struct S0 g_217[1]                       ;
static
        int
               g_1177
               ;
        short
               g_1204 = 0x8491L;
       struct S0 g_1896 = {0x1C87E74FL, 816};
 static
        unsigned
               func_14
                        (
                               p_16
        )  {
        struct S0 l_2620 = { 8L,666};
                    for (;  g_1204      ; g_1204 += 1)
                        l_2620 =                     (g_217[p_16] = g_1896)  ;
                                  g_217[p_16] = l_2620 ;
                                              }
int main (                      )
{
                                                                                                                              func_14(
               g_1177
                                                                                                                                                      )                                                              ;
 crc32_context =
                        g_217[i].f1
                                       ;
 printf ("checksum = %X\n",
                      crc32_context
                               );
    return 0;
}
