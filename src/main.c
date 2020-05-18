#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int VerificarQuantidade(int refrigerante)
{
    if(refrigerante == 0)
    {
        printf("\n Item esgotado! \n");
        return refrigerante;
    }
    else
        return refrigerante;
}

int ReceberDinheiro(float precoRefrigerante)
{
    float dinheiro;
    float troco;
    float falta;
    float dinheiroCaixa = 102.55;

    printf("\n As entradas possiveis da maquina sao: \n 0.01, 0.05, 0.10, 0.25, 0.50, 1, 2, 5, 10, 20, 50 e 100 reais ");
    printf("\n");
    printf("\n Entre com o dinheiro: ");
    scanf("%f", &dinheiro);


    if(dinheiro == 0.01 || dinheiro == 0.05 || dinheiro == 0.10 || dinheiro == 0.25 || dinheiro == 0.50 ||
            dinheiro == 1.00 || dinheiro == 2.00 || dinheiro == 5.00 || dinheiro == 10.00 || dinheiro == 20.00 ||
            dinheiro == 50.00 || dinheiro == 100.00)
    {
        if(dinheiro < precoRefrigerante)
        {
            falta = precoRefrigerante - dinheiro;
            printf("\n Dinheiro insuficiente! Faltam: %.2f  \n", falta);
            return -1;
        }
        else if(dinheiro == precoRefrigerante)
        {
            dinheiroCaixa += dinheiro;
            printf("\n Retire seu Refrigerante!\n");
        }
        else if(dinheiro >= precoRefrigerante)
        {
            troco = dinheiro - precoRefrigerante;
            if(dinheiroCaixa >= troco)
            {
                printf("\n Valor do troco: %.2f  \n\n Retire seu Refrigerante e o troco! \n\n ", troco);
                dinheiroCaixa += dinheiro;
                dinheiroCaixa -= troco;

            }
            else
            {
                printf("\n Infelizmente estamos sem troco, receba seu dinheiro de volta ...\n ");
                return -1;
            }
            return 1;
        }
    }

    return -1;
}

int main(void)
{
    int op;

    int cocaCola = 20;
    int pepsi = 20;
    int fanta = 20;
    int sprite = 20;
    int antartica = 20;
    int kuat = 20;
    int cocaColaZero = 20;
    int fantaUva = 20;
    int spriteZero = 20;
    int kuatZero = 20;

    const float precoCocaCola     = 2.45;
    const float precoPepsi        = 2.15;
    const float precoFanta        = 2.45;
    const float precoSprite       = 2.25;
    const float precoAntartica    = 2.35;
    const float precoKuat         = 2.15;
    const float precoCocaColaZero = 2.35;
    const float precoFantaUva     = 2.45;
    const float precoSpriteZero   = 2.25;
    const float precoKuatZero     = 2.15;

    do
    {
        fflush(stdin);
        printf("\n                        MENU \n"
               "----------------------------------------------------------\n"
               " 0 - SAIR\n"
               " 1 - COCA COLA 350 ML        VALOR:   R$ 2,45  %2.d UNIDADES\n"
               " 2 - PEPSI 350 ML            VALOR:   R$ 2,15  %2.d UNIDADES\n"
               " 3 - FANTA 350 ML            VALOR:   R$ 2,45  %2.d UNIDADES\n"
               " 4 - SPRITE 350 ML           VALOR:   R$ 2,25  %2.d UNIDADES\n"
               " 5 - ANTARTICA 350 ML        VALOR:   R$ 2,35  %2.d UNIDADES\n"
               " 6 - KUAT 350 ML             VALOR:   R$ 2,15  %2.d UNIDADES\n"
               " 7 - COCA COLA Zero 350 ML   VALOR:   R$ 2,35  %2.d UNIDADES\n"
               " 8 - FANTA Uva 350 ML        VALOR:   R$ 2,45  %2.d UNIDADES\n"
               " 9 - SPRITE Zero 350 ML      VALOR:   R$ 2,25  %2.d UNIDADES\n"
               "10 - KUAT Zero 350 ML        VALOR:   R$ 2,15  %2.d UNIDADES"
               "\n----------------------------------------------------------\n",
               cocaCola, pepsi, fanta, sprite, antartica, kuat, cocaColaZero,
               fantaUva, spriteZero,kuatZero);
        printf(" opcao: ");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
        {
            if(VerificarQuantidade(cocaCola) != 0)
            {
                if(ReceberDinheiro(precoCocaCola) != -1)
                    cocaCola--;
            }
            break;
        }
        case 2:
        {
            if(VerificarQuantidade(pepsi) != 0)
            {
                if(ReceberDinheiro(precoPepsi) != -1)
                    pepsi--;
            }
            break;
        }
        case 3:
        {
            if(VerificarQuantidade(fanta) != 0)
            {
                if(ReceberDinheiro(precoFanta) != -1)
                    fanta--;
            }
            break;
        }
        case 4:
        {
            if(VerificarQuantidade(sprite) != 0)
            {
                if(ReceberDinheiro(precoSprite) != -1)
                    sprite--;
            }
            break;
        }
        case 5:
        {
            if(VerificarQuantidade(antartica) != 0)
            {
                if(ReceberDinheiro(precoAntartica) != -1)
                    antartica--;
            }
            break;
        }
        case 6:
        {
            if(VerificarQuantidade(kuat) != 0)
            {
                if(ReceberDinheiro(precoKuat) != -1)
                    kuat--;
            }
            break;
        }
        case 7:
        {
            if(VerificarQuantidade(cocaColaZero)!= 0)
            {
                if(ReceberDinheiro(precoCocaColaZero)!= -1)
                        cocaColaZero--;
            }
            break;
        }
        case 8:
        {
        if(VerificarQuantidade(fantaUva)!= 0)
            {
                if(ReceberDinheiro(precoFantaUva) != -1)
                    fantaUva--;
            }
            break;
        }
        case 9:
        {
            if(VerificarQuantidade(spriteZero) != 0)
            {
                if(ReceberDinheiro(precoSpriteZero) != -1)
                    spriteZero--;
            }
            break;
        }
        case 10:
        {
            if(VerificarQuantidade(kuatZero) != 0)
            {
                if(ReceberDinheiro(precoKuatZero) != -1)
                    kuatZero--;
            }
            break;
        }
        }}  while(op!=0);
            printf("\nSaindo....\n");

    return 0;
}
