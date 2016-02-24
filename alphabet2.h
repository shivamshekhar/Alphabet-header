/*
alphabet2.h
header file
made by: Shivam Shekhar
*/
#include<stdio.h>
#include<windows.h>
#define ALL 1
#define _BLUE 9
#define _GREEN 10
#define _LIGHTBLUE 11
#define _RED 12
#define _MAGENTA 13
#define _YELLOW 14
#define _WHITE 15

char Amapfil_[5][6]={" XXX ",
                     "X   X",
                     "XXXXX",
                     "X   X",
                     "X   X"},
     Bmapfil_[5][6]={"XXXX ",
                     "X   X",
                     "XXXX ",
                     "X   X",
                     "XXXX "},
     Cmapfil_[5][6]={" XXX ",
                     "X    ",
                     "X    ",
                     "X    ",
                     " XXX "},
     Dmapfil_[5][6]={"XXXX ",
                     "X   X",
                     "X   X",
                     "X   X",
                     "XXXX "},
     Emapfil_[5][6]={"XXXXX",
                     "X    ",
                     "XXX  ",
                     "X    ",
                     "XXXXX"},
     Fmapfil_[5][6]={"XXXXX",
                     "X    ",
                     "XXX  ",
                     "X    ",
                     "X    "},
     Gmapfil_[5][6]={" XXX ",
                     "X    ",
                     "X XX ",
                     "X   X",
                     " XXX "},
     Hmapfil_[5][6]={"X   X",
                     "X   X",
                     "XXXXX",
                     "X   X",
                     "X   X"},
     Imapfil_[5][6]={"XXXXX",
                     "  X  ",
                     "  X  ",
                     "  X  ",
                     "XXXXX"},
     Jmapfil_[5][6]={" XXXX",
                     "   X ",
                     "   X ",
                     "X  X ",
                     " XX  "},
     Kmapfil_[5][6]={"X  X ",
                     "X X  ",
                     "XX   ",
                     "X X  ",
                     "X  X "},
     Lmapfil_[5][6]={"X    ",
                     "X    ",
                     "X    ",
                     "X    ",
                     "XXXXX"},
     Mmapfil_[5][6]={"X   X",
                     "XX XX",
                     "X X X",
                     "X   X",
                     "X   X"},
     Nmapfil_[5][6]={"X   X",
                     "XX  X",
                     "X X X",
                     "X  XX",
                     "X   X"},
     Omapfil_[5][6]={" XXX ",
                     "X   X",
                     "X   X",
                     "X   X",
                     " XXX "},
     Pmapfil_[5][6]={"XXXX ",
                     "X   X",
                     "XXXX ",
                     "X    ",
                     "X    "},
     Qmapfil_[5][6]={" XXX ",
                     "X   X",
                     "X X X",
                     " XXX ",
                     "    X"},
     Rmapfil_[5][6]={"XXXX ",
                     "X   X",
                     "XXXX ",
                     "X  X ",
                     "X   X"},
     Smapfil_[5][6]={" XXX ",
                     "X    ",
                     " XXX ",
                     "    X",
                     " XXX "},
     Tmapfil_[5][6]={"XXXXX",
                     "  X ",
                     "  X  ",
                     "  X  ",
                     "  X  "},
     Umapfil_[5][6]={"X   X",
                     "X   X",
                     "X   X",
                     "X   X",
                     " XXX "},
     Vmapfil_[5][6]={"X   X",
                     "X   X",
                     "X   X",
                     " X X ",
                     "  X  "},
     Wmapfil_[5][6]={"X   X",
                     "X   X",
                     "X   X",
                     "X X X",
                     " X X "},
     Xmapfil_[5][6]={"X   X",
                     " X X ",
                     "  X  ",
                     " X X ",
                     "X   X"},
     Ymapfil_[5][6]={"X   X",
                     " X X ",
                     "  X  ",
                     "  X  ",
                     "  X  "},
     Zmapfil_[5][6]={"XXXXX",
                     "   X ",
                     "  X  ",
                     " X   ",
                     "XXXXX"},
     num0mapfil_[5][6]=
                    {" XXX ",
                     "X   X",
                     "X   X",
                     "X   X",
                     " XXX "},
     num1mapfil_[5][6]=
                    {"  XX ",
                     " X X ",
                     "   X ",
                     "   X ",
                     " XXXX"},
     num2mapfil_[5][6]=
                    {"XXXX ",
                     "    X",
                     "  XX ",
                     " X   ",
                     "XXXXX"},
     num3mapfil_[5][6]=
                    {"XXXX ",
                     "    X",
                     " XXX ",
                     "    X",
                     "XXXX "},
     num4mapfil_[5][6]=
                    {"X  X ",
                     "X  X ",
                     "XXXXX",
                     "   X ",
                     "   X "},
    num5mapfil_[5][6]=
                    {"XXXX ",
                     "X    ",
                     "XXXX ",
                     "    X",
                     " XXX "},
    num6mapfil_[5][6]=
                    {" XXX ",
                     "X    ",
                     "XXXX ",
                     "X   X",
                     " XXX "},
    num7mapfil_[5][6]=
                    {"XXXXX",
                     "    X",
                     "   X ",
                     "  X  ",
                     "  X  "},
    num8mapfil_[5][6]=
                    {" XXX ",
                     "X   X",
                     " XXX ",
                     "X   X",
                     " XXX "},
    num9mapfil_[5][6]=
                    {" XXX ",
                     "X   X",
                     " XXXX",
                     "    X",
                     " XXX "};


CHAR_INFO acinf[25],bcinf[25],ccinf[25],dcinf[25],ecinf[25],fcinf[25],gcinf[25],hcinf[25],icinf[25],jcinf[25],kcinf[25];
CHAR_INFO lcinf[25],mcinf[25],ncinf[25],ocinf[25],pcinf[25],qcinf[25],rcinf[25],scinf[25],tcinf[25],ucinf[25],vcinf[25];
CHAR_INFO wcinf[25],xcinf[25],ycinf[25],zcinf[25];
CHAR_INFO num0cinf[25],num1cinf[25],num2cinf[25],num3cinf[25],num4cinf[25],num5cinf[25],num6cinf[25],num7cinf[25],num8cinf[25],num9cinf[25];
void fillchar(int,int,int);
void printchar(int,int,int,int,int);
void printstr(int,int,char *,int,int);
//
void fillchar(int Char,int charvalue,int _color)
{
    int i,j;
    switch(Char)
    {
        case 97:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Amapfil_[i][j]=='X')
                {
                    acinf[j+5*i].Char.AsciiChar=charvalue;
                    acinf[j+5*i].Attributes=_color;
                }
                if(Amapfil_[i][j]==' ')
                {
                    acinf[j+5*i].Char.AsciiChar=' ';
                    acinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 98:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Bmapfil_[i][j]=='X')
                {
                    bcinf[j+5*i].Char.AsciiChar=charvalue;
                    bcinf[j+5*i].Attributes=_color;
                }
                if(Bmapfil_[i][j]==' ')
                {
                    bcinf[j+5*i].Char.AsciiChar=' ';
                    bcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 99:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Cmapfil_[i][j]=='X')
                {
                    ccinf[j+5*i].Char.AsciiChar=charvalue;
                    ccinf[j+5*i].Attributes=_color;
                }
                if(Cmapfil_[i][j]==' ')
                {
                    ccinf[j+5*i].Char.AsciiChar=' ';
                    ccinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 100:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Dmapfil_[i][j]=='X')
                {
                    dcinf[j+5*i].Char.AsciiChar=charvalue;
                    dcinf[j+5*i].Attributes=_color;
                }
                if(Dmapfil_[i][j]==' ')
                {
                    dcinf[j+5*i].Char.AsciiChar=' ';
                    dcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 101:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Emapfil_[i][j]=='X')
                {
                    ecinf[j+5*i].Char.AsciiChar=charvalue;
                    ecinf[j+5*i].Attributes=_color;
                }
                if(Emapfil_[i][j]==' ')
                {
                    ecinf[j+5*i].Char.AsciiChar=' ';
                    ecinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 102:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Fmapfil_[i][j]=='X')
                {
                    fcinf[j+5*i].Char.AsciiChar=charvalue;
                    fcinf[j+5*i].Attributes=_color;
                }
                if(Fmapfil_[i][j]==' ')
                {
                    fcinf[j+5*i].Char.AsciiChar=' ';
                    fcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 103:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Gmapfil_[i][j]=='X')
                {
                    gcinf[j+5*i].Char.AsciiChar=charvalue;
                    gcinf[j+5*i].Attributes=_color;
                }
                if(Gmapfil_[i][j]==' ')
                {
                    gcinf[j+5*i].Char.AsciiChar=' ';
                    gcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 104:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Hmapfil_[i][j]=='X')
                {
                    hcinf[j+5*i].Char.AsciiChar=charvalue;
                    hcinf[j+5*i].Attributes=_color;
                }
                if(Hmapfil_[i][j]==' ')
                {
                    hcinf[j+5*i].Char.AsciiChar=' ';
                    hcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 105:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Imapfil_[i][j]=='X')
                {
                    icinf[j+5*i].Char.AsciiChar=charvalue;
                    icinf[j+5*i].Attributes=_color;
                }
                if(Imapfil_[i][j]==' ')
                {
                    icinf[j+5*i].Char.AsciiChar=' ';
                    icinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 106:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Jmapfil_[i][j]=='X')
                {
                    jcinf[j+5*i].Char.AsciiChar=charvalue;
                    jcinf[j+5*i].Attributes=_color;
                }
                if(Jmapfil_[i][j]==' ')
                {
                    jcinf[j+5*i].Char.AsciiChar=' ';
                    jcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 107:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Kmapfil_[i][j]=='X')
                {
                    kcinf[j+5*i].Char.AsciiChar=charvalue;
                    kcinf[j+5*i].Attributes=_color;
                }
                if(Kmapfil_[i][j]==' ')
                {
                    kcinf[j+5*i].Char.AsciiChar=' ';
                    kcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 108:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Lmapfil_[i][j]=='X')
                {
                    lcinf[j+5*i].Char.AsciiChar=charvalue;
                    lcinf[j+5*i].Attributes=_color;
                }
                if(Lmapfil_[i][j]==' ')
                {
                    lcinf[j+5*i].Char.AsciiChar=' ';
                    lcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 109:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Mmapfil_[i][j]=='X')
                {
                    mcinf[j+5*i].Char.AsciiChar=charvalue;
                    mcinf[j+5*i].Attributes=_color;
                }
                if(Mmapfil_[i][j]==' ')
                {
                    mcinf[j+5*i].Char.AsciiChar=' ';
                    mcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 110:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Nmapfil_[i][j]=='X')
                {
                    ncinf[j+5*i].Char.AsciiChar=charvalue;
                    ncinf[j+5*i].Attributes=_color;
                }
                if(Nmapfil_[i][j]==' ')
                {
                    ncinf[j+5*i].Char.AsciiChar=' ';
                    ncinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 111:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Omapfil_[i][j]=='X')
                {
                    ocinf[j+5*i].Char.AsciiChar=charvalue;
                    ocinf[j+5*i].Attributes=_color;
                }
                if(Omapfil_[i][j]==' ')
                {
                    ocinf[j+5*i].Char.AsciiChar=' ';
                    ocinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 112:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Pmapfil_[i][j]=='X')
                {
                    pcinf[j+5*i].Char.AsciiChar=charvalue;
                    pcinf[j+5*i].Attributes=_color;
                }
                if(Pmapfil_[i][j]==' ')
                {
                    pcinf[j+5*i].Char.AsciiChar=' ';
                    pcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 113:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Qmapfil_[i][j]=='X')
                {
                    qcinf[j+5*i].Char.AsciiChar=charvalue;
                    qcinf[j+5*i].Attributes=_color;
                }
                if(Qmapfil_[i][j]==' ')
                {
                    qcinf[j+5*i].Char.AsciiChar=' ';
                    qcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 114:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Rmapfil_[i][j]=='X')
                {
                    rcinf[j+5*i].Char.AsciiChar=charvalue;
                    rcinf[j+5*i].Attributes=_color;
                }
                if(Rmapfil_[i][j]==' ')
                {
                    rcinf[j+5*i].Char.AsciiChar=' ';
                    rcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 115:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Smapfil_[i][j]=='X')
                {
                    scinf[j+5*i].Char.AsciiChar=charvalue;
                    scinf[j+5*i].Attributes=_color;
                }
                if(Smapfil_[i][j]==' ')
                {
                    scinf[j+5*i].Char.AsciiChar=' ';
                    scinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 116:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Tmapfil_[i][j]=='X')
                {
                    tcinf[j+5*i].Char.AsciiChar=charvalue;
                    tcinf[j+5*i].Attributes=_color;
                }
                if(Tmapfil_[i][j]==' ')
                {
                    tcinf[j+5*i].Char.AsciiChar=' ';
                    tcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 117:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Umapfil_[i][j]=='X')
                {
                    ucinf[j+5*i].Char.AsciiChar=charvalue;
                    ucinf[j+5*i].Attributes=_color;
                }
                if(Umapfil_[i][j]==' ')
                {
                    ucinf[j+5*i].Char.AsciiChar=' ';
                    ucinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 118:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Vmapfil_[i][j]=='X')
                {
                    vcinf[j+5*i].Char.AsciiChar=charvalue;
                    vcinf[j+5*i].Attributes=_color;
                }
                if(Vmapfil_[i][j]==' ')
                {
                    vcinf[j+5*i].Char.AsciiChar=' ';
                    vcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 119:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Wmapfil_[i][j]=='X')
                {
                    wcinf[j+5*i].Char.AsciiChar=charvalue;
                    wcinf[j+5*i].Attributes=_color;
                }
                if(Wmapfil_[i][j]==' ')
                {
                    wcinf[j+5*i].Char.AsciiChar=' ';
                    wcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 120:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Xmapfil_[i][j]=='X')
                {
                    xcinf[j+5*i].Char.AsciiChar=charvalue;
                    xcinf[j+5*i].Attributes=_color;
                }
                if(Xmapfil_[i][j]==' ')
                {
                    xcinf[j+5*i].Char.AsciiChar=' ';
                    xcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 121:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Ymapfil_[i][j]=='X')
                {
                    ycinf[j+5*i].Char.AsciiChar=charvalue;
                    ycinf[j+5*i].Attributes=_color;
                }
                if(Ymapfil_[i][j]==' ')
                {
                    ycinf[j+5*i].Char.AsciiChar=' ';
                    ycinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 122:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(Zmapfil_[i][j]=='X')
                {
                    zcinf[j+5*i].Char.AsciiChar=charvalue;
                    zcinf[j+5*i].Attributes=_color;
                }
                if(Zmapfil_[i][j]==' ')
                {
                    zcinf[j+5*i].Char.AsciiChar=' ';
                    zcinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 1:
            for(i=0;i<26;i++)
                fillchar(i+97,charvalue,_color);
            for(i=0;i<10;i++)
                fillchar(i+48,charvalue,_color);
            break;
        case 48:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num0mapfil_[i][j]=='X')
                {
                    num0cinf[j+5*i].Char.AsciiChar=charvalue;
                    num0cinf[j+5*i].Attributes=_color;
                }
                if(num0mapfil_[i][j]==' ')
                {
                    num0cinf[j+5*i].Char.AsciiChar=' ';
                    num0cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 49:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num1mapfil_[i][j]=='X')
                {
                    num1cinf[j+5*i].Char.AsciiChar=charvalue;
                    num1cinf[j+5*i].Attributes=_color;
                }
                if(num1mapfil_[i][j]==' ')
                {
                    num1cinf[j+5*i].Char.AsciiChar=' ';
                    num1cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 50:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num2mapfil_[i][j]=='X')
                {
                    num2cinf[j+5*i].Char.AsciiChar=charvalue;
                    num2cinf[j+5*i].Attributes=_color;
                }
                if(num2mapfil_[i][j]==' ')
                {
                    num2cinf[j+5*i].Char.AsciiChar=' ';
                    num2cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 51:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num3mapfil_[i][j]=='X')
                {
                    num3cinf[j+5*i].Char.AsciiChar=charvalue;
                    num3cinf[j+5*i].Attributes=_color;
                }
                if(num3mapfil_[i][j]==' ')
                {
                    num3cinf[j+5*i].Char.AsciiChar=' ';
                    num3cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 52:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num4mapfil_[i][j]=='X')
                {
                    num4cinf[j+5*i].Char.AsciiChar=charvalue;
                    num4cinf[j+5*i].Attributes=_color;
                }
                if(num4mapfil_[i][j]==' ')
                {
                    num4cinf[j+5*i].Char.AsciiChar=' ';
                    num4cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 53:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num5mapfil_[i][j]=='X')
                {
                    num5cinf[j+5*i].Char.AsciiChar=charvalue;
                    num5cinf[j+5*i].Attributes=_color;
                }
                if(num5mapfil_[i][j]==' ')
                {
                    num5cinf[j+5*i].Char.AsciiChar=' ';
                    num5cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 54:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num6mapfil_[i][j]=='X')
                {
                    num6cinf[j+5*i].Char.AsciiChar=charvalue;
                    num6cinf[j+5*i].Attributes=_color;
                }
                if(num6mapfil_[i][j]==' ')
                {
                    num6cinf[j+5*i].Char.AsciiChar=' ';
                    num6cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 55:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num7mapfil_[i][j]=='X')
                {
                    num7cinf[j+5*i].Char.AsciiChar=charvalue;
                    num7cinf[j+5*i].Attributes=_color;
                }
                if(num7mapfil_[i][j]==' ')
                {
                    num7cinf[j+5*i].Char.AsciiChar=' ';
                    num7cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 56:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num8mapfil_[i][j]=='X')
                {
                    num8cinf[j+5*i].Char.AsciiChar=charvalue;
                    num8cinf[j+5*i].Attributes=_color;
                }
                if(num8mapfil_[i][j]==' ')
                {
                    num8cinf[j+5*i].Char.AsciiChar=' ';
                    num8cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;
        case 57:
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(num9mapfil_[i][j]=='X')
                {
                    num9cinf[j+5*i].Char.AsciiChar=charvalue;
                    num9cinf[j+5*i].Attributes=_color;
                }
                if(num9mapfil_[i][j]==' ')
                {
                    num9cinf[j+5*i].Char.AsciiChar=' ';
                    num9cinf[j+5*i].Attributes=_color;
                }
            }
        }
        break;

    }
}

void printchar(int Char,int design,int color,int x,int y)
{
    SMALL_RECT rect;
    COORD sz={5,5},zerozero={0,0};
    rect.Left=x;
    rect.Top=y;
    rect.Right=x+5;
    rect.Bottom=y+5;
    fillchar(Char,design,color);
    switch(Char)
    {
    case 'a':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),acinf,sz,zerozero,&rect);
        break;
    case 'b':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),bcinf,sz,zerozero,&rect);
        break;
    case 'c':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),ccinf,sz,zerozero,&rect);
        break;
    case 'd':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),dcinf,sz,zerozero,&rect);
        break;
    case 'e':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),ecinf,sz,zerozero,&rect);
        break;
    case 'f':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),fcinf,sz,zerozero,&rect);
        break;
    case 'g':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),gcinf,sz,zerozero,&rect);
        break;
    case 'h':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),hcinf,sz,zerozero,&rect);
        break;
    case 'i':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),icinf,sz,zerozero,&rect);
        break;
    case 'j':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),jcinf,sz,zerozero,&rect);
        break;
    case 'k':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),kcinf,sz,zerozero,&rect);
        break;
    case 'l':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),lcinf,sz,zerozero,&rect);
        break;
    case 'm':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),mcinf,sz,zerozero,&rect);
        break;
    case 'n':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),ncinf,sz,zerozero,&rect);
        break;
    case 'o':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),ocinf,sz,zerozero,&rect);
        break;
    case 'p':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),pcinf,sz,zerozero,&rect);
        break;
    case 'q':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),qcinf,sz,zerozero,&rect);
        break;
    case 'r':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),rcinf,sz,zerozero,&rect);
        break;
    case 's':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),scinf,sz,zerozero,&rect);
        break;
    case 't':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),tcinf,sz,zerozero,&rect);
        break;
    case 'u':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),ucinf,sz,zerozero,&rect);
        break;
    case 'v':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),vcinf,sz,zerozero,&rect);
        break;
    case 'w':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),wcinf,sz,zerozero,&rect);
        break;
    case 'x':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),xcinf,sz,zerozero,&rect);
        break;
    case 'y':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),ycinf,sz,zerozero,&rect);
        break;
    case 'z':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),zcinf,sz,zerozero,&rect);
        break;
    case '0':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num0cinf,sz,zerozero,&rect);
        break;
    case '1':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num1cinf,sz,zerozero,&rect);
        break;
    case '2':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num2cinf,sz,zerozero,&rect);
        break;
    case '3':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num3cinf,sz,zerozero,&rect);
        break;
    case '4':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num4cinf,sz,zerozero,&rect);
        break;
    case '5':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num5cinf,sz,zerozero,&rect);
        break;
    case '6':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num6cinf,sz,zerozero,&rect);
        break;
    case '7':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num7cinf,sz,zerozero,&rect);
        break;
    case '8':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num8cinf,sz,zerozero,&rect);
        break;
    case '9':
        WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),num9cinf,sz,zerozero,&rect);
        break;
    }
}
//
void printstr(int x,int y,char *str,int design,int color)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            if(x+6>79)
            {
                x=2;
                y+=6;
            }
            printchar(str[i],design,color,x,y);
            x+=6;
        }
        else
            x+=3;
    }
}
