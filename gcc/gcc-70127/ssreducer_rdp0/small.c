typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
static void
platform_main_end(uint32_t crc )
{
 printf ("checksum = %X\n", crc);
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab ()
{
 uint32_t crc;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 }
static void
transparent_crc (uint64_t val  )
{
 crc32_8bytes(val);
 }
struct S0 {
   int32_t f0;
   signed f1 : 22;
};
struct S1 {
   unsigned f0 : 16;
   signed f1 : 9;
   signed f2 : 28;
   signed f3 : 13;
   unsigned f4 : 15;
   unsigned f5 : 17;
};
static uint32_t g_69 = 0UL;
static uint16_t g_112 = 0x21B9L;
static uint32_t g_174 = 18446744073709551610UL;
static struct S0 g_217[1] = {{0x4CA2719FL,-474}};
static uint8_t g_264 = 0x9EL;
static struct S1 g_658 = {251,19,4643,-9,101,27};
static uint32_t g_900 = 0xBE201F5BL;
static int32_t g_1177[4][5][2] = {{{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}, {{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}, {{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}, {{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}};
static int16_t g_1204 = 0x8491L;
static struct S0 g_1895 = {3L,-1076};
static struct S0 g_1896 = {0x1C87E74FL,-816};
static int32_t g_2569 = 1L;
static int8_t g_2667 = 0xB3L;
static int32_t func_3(uint16_t p_4   );
static uint16_t func_8(int32_t p_9 );
static uint8_t func_14( int8_t p_16, uint8_t p_17  );
static int8_t func_1()
{
    int32_t l_22[10][10][2] = {{{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}};
    int32_t l_3000 = 0x9F95F825L;
    int32_t l_3110 = 0xE827D082L;
    int32_t l_3850 = 0xEEDF68D4L;
    l_3850 = (0x3D783989L | func_3((l_3110 = func_8((l_3000 = (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s(((func_14( g_1177[3][2][1], l_22[2][3][0]  ) || 0xA1L) != g_2569))) || g_2667), g_1177[2][3][1]))) ))   ));
}
static int32_t func_3(uint16_t p_4   )
{
    for (p_4 = 0; (p_4 < 42); )
    {
        {
                for (; (g_2667 < 17); )
                {
                    return g_658.f3;
                };
            }
    };
}
static uint16_t func_8(int32_t p_9 )
{
                                       if (!((g_69>0U)))
                    return g_264;
}
static uint8_t func_14( int8_t p_16, uint8_t p_17  )
{
    for (g_900 = 0; (g_900 < 45); )
    {
        struct S0 l_2620 = {-8L,666};
        for (p_16 = 0; (p_16 >= 0); )
        {
            struct S0 l_2618 = {0x368FB9A0L,1042};
            for (g_174 = 0; (g_174 <= 1); g_174 += 1)
                {
                    struct S0 l_2643 = {0xC5B0517CL,25};
                    for (; (g_1204 <= 0); g_1204 += 1)
                    {
                        struct S0 l_2619 = {1L,826};
                        l_2620 = (l_2619 = (l_2618 = (g_217[p_16] = g_1896)));
                        }
                    for (g_112 = 0; (g_112 <= 0); g_112 += 1)
                    {
                        l_2643 = (g_217[p_16] = l_2620);
                        }
                }
            for (p_17 = 0; (p_17 <= 1); )
            {
                int32_t l_2691 = (-1L);
                for (; (g_1895.f0 >= 0); )
                {
                    return l_2691;
                };
            };
        };
    };
}
int main (int argc, char* argv[])
{
    int i, j, k;
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_217[i].f1  );
        }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL );
    return 0;
}