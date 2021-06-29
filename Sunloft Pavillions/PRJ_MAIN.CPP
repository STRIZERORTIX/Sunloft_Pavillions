#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>


void berr()
{
char ber[2];
double c,berqty;
cout<<endl<<"THE VARITIES OF BERRIES WE HAVE ARE:";
cout<<endl<<"BLUE BERRIES,(CODE NAME:BB)";
cout<<endl<<"RASP BERRIES,(CODE NAME:RB)";
cout<<endl<<"GOJI BERRIES,(CODE NAME:GB)";
cout<<endl<<"STRABERRIES,(CODE NAME:SB)";
cout<<endl<<"BILBERRIES,(CODE NAME:BIB)";
cout<<endl<<"ACAIBERRIES,(CODE NAME:AB)";
cout<<endl<<"CRANBERRIES,(CODE NAME:CRB)";
cout<<endl<<"GRAPES,(CODE NAME:GP)";
cout<<endl<<"WHAT BERRIE U WANT??:";
gets(ber);
cout<<endl<<"ENTER THE QUANTITY OF "<<ber<<":";
cin>>berqty;
if(strcmp(ber,"BB")==0)c=175.2*berqty;
if(strcmp(ber,"RB")==0)c=180*berqty;
if(strcmp(ber,"GB")==0)c=265.2*berqty;
if(strcmp(ber,"SB")==0)c=84*berqty;
if(strcmp(ber,"BIB")==0)c=700*berqty;
if(strcmp(ber,"AB")==0)c=365*berqty;
if(strcmp(ber,"CRB")==0)c=175*berqty;
if(strcmp(ber,"GP")==0)c=100*berqty; 
cout<<endl<<"THE PRICE OF UR PRODUCTS IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void bubveg()
{
clrscr();
char blub[2];
double c,blbqty;
cout<<endl<<"THE BULB TYPE VEGE'S ARE :";
cout<<endl<<"CHIVES,(CODE NAME:CI)";
cout<<endl<<"WILD LEEK,(CODE NAME:WL)";
cout<<endl<<"FRNNEL BLUBLS,(CODE NAME:FB)";
cout<<endl<<"ONIONS,(CODE NAME:OI)";
cout<<endl<<"SHALLOTS,(CODE NAME:SH)";
cout<<endl<<"PLEASE ENETER THE BULB VEGE U WANT:";
gets(blub);
cout<<endl<<"ENTER THE QUANTIY OF "<<blub<<":";
cin>>blbqty;
if(strcmp(blub,"CI")==0)c=180*blbqty;
if(strcmp(blub,"WL")==0)c=150*blbqty;
if(strcmp(blub,"FB")==0)c=135*blbqty;
if(strcmp(blub,"OI")==0)c=59*blbqty;
if(strcmp(blub,"SH")==0)c=30*blbqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void citfur()
{
clrscr();
char cit[2];
double citqty,c;
cout<<endl<<"THE VARITIES OF CITRUS FURITS WE HAVE ARE:";
cout<<endl<<"MOSAMBI,(CODE NAME:MO)";
cout<<endl<<"ORANGE,(CODE NAME:OR)";
cout<<endl<<"TANGERINE,(CODE NAME:TI)";
cout<<endl<<"KEY LIME,(CODE NAME:KL)";
cout<<endl<<"BLOOD ORANGE,(CODE NAME:BO)";
cout<<endl<<"LEMON,(CODE NAME:LE)";
cout<<endl<<"WHAT CITRUS FURIT U WANT??:";
gets(cit);
cout<<endl<<"ENTER THE QUANTITY OF "<<cit<<"(IN KG'S PLEASE):";
cin>>citqty;
if(strcmp(cit,"MO")==0)c=169*citqty;
if(strcmp(cit,"OR")==0)c=100*citqty;
if(strcmp(cit,"TI")==0)c=640*citqty;
if(strcmp(cit,"KL")==0)c=800*citqty;
if(strcmp(cit,"BO")==0)c=1000*citqty;
if(strcmp(cit,"LE")==0)c=235*citqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void ffp()
{
clrscr();
char ffp[10];
double fqty,c;
cout<<endl<<"THE VARITIES OF FRESH AND FROZEN PRODUCTS WE HAVE ARE:";
cout<<endl<<"KASSTHORI METHI,(CODE NAME:CU)";
cout<<endl<<"COW'S-MILK,(CODE NAME:CM)";
cout<<endl<<"MINT LEAVES,(CODE NAME:ML)";
cout<<endl<<"SHREDDED COCONUT,(CODE NAME:SC)";
cout<<endl<<"WHAT TYPE OF FRESH AND FROZEN PRODUCT U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(ffp);
cout<<endl<<"ENTER THE QUANTITY OF "<<ffp<<":";
cin>>fqty;
if(strcmp(ffp,"CU")==0)c=90*fqty;
if(strcmp(ffp,"CM")==0)c=65*fqty;
if(strcmp(ffp,"ML")==0)c=350*fqty;
if(strcmp(ffp,"SC")==0)c=150*fqty;
cout<<endl<<"THE PRICE OF UR  PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}
void floveg()
{
char flo[2];
double floqty,c;
clrscr();
cout<<endl<<"THE TYPE OF FLOWER VEGETABLES ARE:";
cout<<endl<<"BRUSSELS SPROUTS,(CODE NAME:BU)";
cout<<endl<<"CABBAGE,(CODE NAME:CG)";
cout<<endl<<"CELERY,(CODE NAME:CE)";
cout<<endl<<"LETTUCE,(CODE NAME:LE)";
cout<<endl<<"PALAK,(CODE NAME:PL)";
cout<<endl<<"CAULIFLOWER,(CODE NAME:CF)";
cout<<endl<<"PLEASE ENTER THE FLOWER U WANT:";
gets(flo);
cout<<endl<<"ENTER THY QUANTITY OF "<<flo<<"(IN KG'S) PLEASE:";
cin>>floqty;
if(strcmp(flo,"BU")==0)c=700*floqty;
if(strcmp(flo,"CG")==0)c=25*floqty;
if(strcmp(flo,"CE")==0)c=149*floqty;
if(strcmp(flo,"LE")==0)c=49*floqty;
if(strcmp(flo,"PL")==0)c=60*floqty;
if(strcmp(flo,"CF")==0)c=40*floqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void gr()
{
clrscr();
char GR[10];
double GRqty,c;
cout<<endl<<"THE VARITIES OF GRAINS WE HAVE ARE:";
cout<<endl<<"BASMATI RICE,(CODE NAME:BR)";
cout<<endl<<"BROWN BASMATHI RICE,(CODE NAME:BBR)";
cout<<endl<<"CRACKED WHEAT,(CODE NAME:CW)";
cout<<endl<<"FLATTENED RICE,(CODE NAME:FR)";
cout<<endl<<"PUFFED RICE,(CODE NAME:PR)";
cout<<endl<<"RAVA,(CODE NAME:RV)";
cout<<endl<<"ATTA FLOUR,(CODE NAME:AF)";
cout<<endl<<"MILLET FLOUR,(CODE NAME:MF)";
cout<<endl<<"BESAN FLOUR,(CODE NAME:BF)";
cout<<endl<<"WHAT TYPE GRAINS U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(GR);
cout<<endl<<"ENTER THE QUANTITY OF "<<GR<<":";
cin>>GRqty;
if(strcmp(GR,"BR")==0)c=72*GRqty;
if(strcmp(GR,"BBR")==0)c=140*GRqty;
if(strcmp(GR,"CW")==0)c=60*GRqty;
if(strcmp(GR,"FR")==0)c=76*GRqty;
if(strcmp(GR,"PR")==0)c=45*GRqty;
if(strcmp(GR,"RV")==0)c=40*GRqty;
if(strcmp(GR,"AF")==0)c=102.9*GRqty;
if(strcmp(GR,"MF")==0)c=140*GRqty;
if(strcmp(GR,"BF")==0)c=86*GRqty; 
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLIONS.INC HAVE A NICE DAY!";
}

void le()
{
clrscr();
char le[10];
double leqty,c;
cout<<endl<<"THE VARITIES OF LEGUMES WE HAVE ARE:";
cout<<endl<<"CHANA DAL,(CODE NAME:CD)";
cout<<endl<<"URAD DAL,(CODE NAME:UD)";
cout<<endl<<"MOONG DAL,(CODE NAME:MD)";
cout<<endl<<"MASOOR DAL,(CODE NAME:MAD)";
cout<<endl<<"RAJMA,(CODE NAME:RJ)";
cout<<endl<<"PEANUTS,(CODE NAME:PE";
cout<<endl<<"VAAL DAL,(CODE NAME:VD)";
cout<<endl<<"TOOR DAL,(CODE NAME:TD)";
cout<<endl<<"MUNG BEANS,(CODE NAME:MB)";
cout<<endl<<"WHAT TYPE OF LEGUMES U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(le);
cout<<endl<<"ENTER THE QUANTITY OF "<<le<<":";
cin>>leqty;
if(strcmp(le,"CD")==0)c=80*leqty;
if(strcmp(le,"UD")==0)c=60*leqty;
if(strcmp(le,"MD")==0)c=48*leqty;
if(strcmp(le,"MAD")==0)c=92*leqty;
if(strcmp(le,"RJ")==0)c=100*leqty;
if(strcmp(le,"PE")==0)c=40*leqty;
if(strcmp(le,"VD")==0)c=160*leqty;
if(strcmp(le,"TD")==0)c=59*leqty;
if(strcmp(le,"MB")==0)c=66*leqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void leveg()
{
clrscr();
char lfy[2];
double lfyqty,c;
cout<<endl<<"THE TYPES OF LEAVES VEGE'S ARE :";
cout<<endl<<"KALE,(CODE NAME:KA)";
cout<<endl<<"MICROGREENS,(CODE NAME:MI)";
cout<<endl<<"ROMAINELETTUCE,(CODE NAME:RO)";
cout<<endl<<"TURNIPGREENS,(CODE NAME:TU)";
cout<<endl<<"ICEBERGLETTUCE,(CODE NAME:IE)";
cout<<endl<<"PLEASE ENTER THE LEAFY VEGE U WANT:";
gets(lfy);
cout<<endl<<"ENTER THE QUANTITY OF "<<lfy<<":";
cin>>lfyqty;
if(strcmp(lfy,"KA")==0)c=266*lfyqty;
if(strcmp(lfy,"MI")==0)c=299*lfyqty;
if(strcmp(lfy,"RO")==0)c=100*lfyqty;
if(strcmp(lfy,"TU")==0)c=64.5*lfyqty;
if(strcmp(lfy,"IE")==0)c=60*lfyqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void load()
{
clrscr();
	   for(int j=0;j<101;j++)
		   {
		   delay(10);
		   clrscr();
		   cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t    LOADING:"<<j<<"%";
		   }
	   clrscr();
}

void mel()
{
clrscr();
char mel[10];
double c,melqty;
cout<<endl<<"THE VARITIES OF MELONS WE HAVE ARE:";
cout<<endl<<"WATER MELON,(CODE NAME:WM)";
cout<<endl<<"SHARLYN MELON,(CODE NAME:SM)";
cout<<endl<<"MUSK MELON,(CODE NAME:MM)";
cout<<endl<<"PERSIAN MELON,(CODE NAME:PEM)";
cout<<endl<<"CASABA MELON,(CODE NAME:CSM)";
cout<<endl<<"WHAT MELON U WANT??:";
gets(mel);
cout<<endl<<"ENTER THE QUANTITY OF "<<mel<<":";
cin>>melqty;
if(strcmp(mel,"WM")==0)c=60.7*melqty;
if(strcmp(mel,"SM")==0)c=70*melqty;
if(strcmp(mel,"MM")==0)c=65*melqty;
if(strcmp(mel,"PEM")==0)c=150*melqty;
if(strcmp(mel,"CSM")==0)c=90*melqty;
cout<<endl<<"THE PRICE OF UR PRODUCTS IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HA	VE A NICE DAY!";
}

void oil()
{
clrscr();
char OIL[10];
double oqty,c;
cout<<endl<<"THE VARITIES OF OILS WE HAVE ARE:";
cout<<endl<<"SESAME OIL,(CODE NAME:S)";
cout<<endl<<"COCONUT OIL,(CODE NAME:CC)";
cout<<endl<<"MUSTARD OIL,(CODE NAME:MO)";
cout<<endl<<"GROUNDNUT OIL,(CODE NAME:GO)";
cout<<endl<<"WALUNT BARK OIL,(CODE NAME:WBO)";
cout<<endl<<"GINGELLY OIL,(CODE NAME:G)";
cout<<endl<<"WHAT TYPE OF OIL U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(OIL);
cout<<endl<<"ENTER THE QUANTITY OF "<<OIL<<":";
cin>>oqty;
if(strcmp(OIL,"S")==0)c=110*oqty;
if(strcmp(OIL,"CC")==0)c=300*oqty;
if(strcmp(OIL,"MO")==0)c=100*oqty;
if(strcmp(OIL,"GO")==0)c=280*oqty;
if(strcmp(OIL,"WBO")==0)c=300*oqty;
if(strcmp(OIL,"G")==0)c=225*oqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void roveg()
{
clrscr();
char r[2];double c,rootqty;
cout<<endl<<"THE AVAILABLE ROOT TYPE OF VEGETABLES ARE:";
cout<<endl<<"GARLICS,(CODE NAME:GR)";
cout<<endl<<"GINGERS,(CODE NAME:GI)";
cout<<endl<<"RADISHES,(CODE NAME:RD)";
cout<<endl<<"SWEET POTATOS,(CODE NAME:SW)";
cout<<endl<<"TURNIPS,(CODE NAME:TU)";
cout<<endl<<"PLEAS ENTER THE VEGE U WANT:";
gets(r);
cout<<endl<<"ENTER THE QUANTITY OF "<<r<<"(IN KG'S) PLEASE:";
cin>>rootqty;
if(strcmp(r,"GR")==0)c=189*rootqty;
if(strcmp(r,"GI")==0)c=209*rootqty;
if(strcmp(r,"RD")==0)c=39*rootqty;
if(strcmp(r,"SW")==0)c=79*rootqty;
if(strcmp(r,"TU")==0)c=99*rootqty;
cout<<endl<<"THE PRICE OF UR PRODUCTS IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void rps()
{
clrscr();
char rps[10];
double rpqty,c;
cout<<endl<<"THE VARITIES OF  READYMADE POWDERED SPICES WE HAVE ARE:";
cout<<endl<<"REDCHILLI POWDER,(CODE NAME:RE) ";
cout<<endl<<"GARAM MASALA,(CODE NAME:GM)";
cout<<endl<<"TUMERIC POWDER,(CODE NAME:TP)";
cout<<endl<<"BIRIYANI MASALA,(CODE NAME:BM)";
cout<<endl<<"PAVBHAJI MASALA,(CODE NAME:PM)";
cout<<endl<<"SAMABAR POWDER,(CODE NAME:SM)";
cout<<endl<<"RASAM POWDER,(CODE NAME:RM)";
cout<<endl<<"CORRIANDERLEAVES POWDER,(CODE NAME:CP)";
cout<<endl<<"PEPPER POWDER,(CODE NAME:PP)";
cout<<endl<<"WHAT TYPE OF READYMADE POWDERED SPICES U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(rps);
cout<<endl<<"ENTER THE QUANTITY OF "<<rps<<":";
cin>>rpqty;
if(strcmp(rps,"RE")==0)c=135*rpqty;
if(strcmp(rps,"GA")==0)c=26*rpqty;
if(strcmp(rps,"TP")==0)c=130*rpqty;
if(strcmp(rps,"BM")==0)c=350*rpqty;
if(strcmp(rps,"PM")==0)c=380*rpqty;
if(strcmp(rps,"SM")==0)c=83*rpqty;
if(strcmp(rps,"RM")==0)c=48*rpqty;
if(strcmp(rps,"CP")==0)c=36*rpqty;
if(strcmp(rps,"PP")==0)c=144*rpqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC	 HAVE A NICE DAY!";
}

void seveg()
{
char sed[2];
double sdqty,c;
clrscr();
cout<<endl<<"THE TYPES OF SEED VEGETABLES ARE:";
cout<<endl<<"ASPARAGUS,(CODE NAME:AS)";
cout<<endl<<"BEAN,(CODE NAME:BE)";
cout<<endl<<"SPROUTS,(CODE NAME:SP)";
cout<<endl<<"CABBAGE SEEDS,(CODE NAME:CB)";
cout<<endl<<"PLEASE ENTER THR SEEDTYPE VEGE U WANT:";
gets(sed);
cout<<endl<<"ENTER THE QUANTITY OF "<<sed<<":";
cin>>sdqty;
if(strcmp(sed,"AS")==0)c=115*sdqty;
if(strcmp(sed,"BE")==0)c=49*sdqty;
if(strcmp(sed,"SP")==0)c=73*sdqty;
if(strcmp(sed,"CB")==0)c=18.5*sdqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void sp()
{
clrscr();
char sp[10];
double spqty,c;
cout<<endl<<"THE VARITIES OF SPICES WE HAVE ARE:";
cout<<endl<<"RED CHILLI,(CODE NAME:RC)";
cout<<endl<<"GREEN CHILLI,(CODE NAME:GC)";
cout<<endl<<"BLACK MUSTARD SEEDS,(CODE NAME:BS)";
cout<<endl<<"CORIANDER SEEDS,(CODE NAME:CS)";
cout<<endl<<"CUMIN SEEDS,(CODE NAME:CUS)";
cout<<endl<<"CARDAMOM PODS,(CODE NAME:CP)";
cout<<endl<<"CLOVES,(CODE NAME:CL)";
cout<<endl<<"CINNAMON BARK,(CODE NAME:CB)";
cout<<endl<<"WHAT TYPE OF SPICES U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(sp);
cout<<endl<<"ENTER THE QUANTITY OF "<<sp<<":";
cin>>spqty;
if(strcmp(sp,"RC")==0)c=43*spqty;
if(strcmp(sp,"GC")==0)c=49*spqty;
if(strcmp(sp,"BS")==0)c=104*spqty;
if(strcmp(sp,"CS")==0)c=76*spqty;
if(strcmp(sp,"CUS")==0)c=59*spqty;
if(strcmp(sp,"CP")==0)c=200*spqty;
if(strcmp(sp,"CL")==0)c=200*spqty;
if(strcmp(sp,"CB")==0)c=55*spqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC	 HAVE A NICE DAY!";
}

void stfur()
{
clrscr();
char stn[2];
double stnqty,c;
cout<<endl<<"THE VARITIES OF STONE FURITS WE HAVE ARE:";
cout<<endl<<"PEACH,(CODE NAME:PC)";
cout<<endl<<"NECTARINE,(CODE NAME:NE)";
cout<<endl<<"PLUMS,(CODE NAME:PU)";
cout<<endl<<"LYCHEES,(CODE NAME:LY)";
cout<<endl<<"MANGOS,(CODE NAME:MS)";
cout<<endl<<"ALMOND,(CODE NAME:AO)";
cout<<endl<<"APRICOTS,(CODE NAME:AR)";
cout<<endl<<"CHERRIES,(CODE NAME:CE)";
cout<<endl<<"WHAT STONE FURIT U WANT??:";
gets(stn);
cout<<endl<<"ENTER THE QUANTITY OF "<<stn<<":";
cin>>stnqty;
if(strcmp(stn,"PC")==0)c=250*stnqty;
if(strcmp(stn,"NE")==0)c=250*stnqty;
if(strcmp(stn,"PU")==0)c=200*stnqty;
if(strcmp(stn,"LY")==0)c=60*stnqty;
if(strcmp(stn,"MS")==0)c=130*stnqty;
if(strcmp(stn,"AO")==0)c=500*stnqty;
if(strcmp(stn,"AR")==0)c=140*stnqty;
if(strcmp(stn,"CE")==0)c=350*stnqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void trexfur()
{
clrscr();
char ex[2];
double troqty,c;
cout<<endl<<"THE VARITIES OF TROPICAL AND EXORTIC FURITS WE HAVE ARE:";
cout<<endl<<"CHERIMOYA,(CODE NAME:CH)";
cout<<endl<<"DURIAN,(CODE NAME:DU)";
cout<<endl<<"LANGSAT,(CODE NAME:LA)";
cout<<endl<<"KIWANO,(CODE NAME:KI)";
cout<<endl<<"MANGOSTEEN,(CODE NAME:MS)";
cout<<endl<<"JACKFRUIT,(CODE NAME:JF)";
cout<<endl<<"APPLE,(CODE NAME:AL)";
cout<<endl<<"BANANA,(CODE NAME:BN)";
cout<<endl<<"PAPAYA,(CODE NAME:PP)";
cout<<endl<<"WHAT TROPICAL AND EXORTIC FURIT U WANT??:";
gets(ex);
cout<<endl<<"ENTER THE QUANTITY OF "<<ex<<":";
cin>>troqty;
if(strcmp(ex,"CH")==0)c=400*troqty;
if(strcmp(ex,"DU")==0)c=90*troqty;
if(strcmp(ex,"LA")==0)c=50*troqty;
if(strcmp(ex,"KI")==0)c=500*troqty;
if(strcmp(ex,"MS")==0)c=300*troqty;
if(strcmp(ex,"JF")==0)c=260*troqty;
if(strcmp(ex,"AL")==0)c=109*troqty;
if(strcmp(ex,"BN")==0)c=80*troqty;
if(strcmp(ex,"PP")==0)c=80*troqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void omp()
{
char omp[2];
double mqty,f;
load();
cout<<endl<<"THE VARITIES OF MISCELLANEOUS PRODUCT WE HAVE ARE:";
cout<<endl<<"JAGGERY,(CODE NAME:JA)";
cout<<endl<<"TAMARIND,(CODE NAME:TA)";
cout<<endl<<"RAISINS,(CODE NAME:RA)";
cout<<endl<<"CASHEWS,(CODE NAME:CA)";
cout<<endl<<"PISTACHIOS,(CODE NAME:PI)";
cout<<endl<<"COCONUT MILK,(CODE NAME:COM)";
cout<<endl<<"KASSTHORI METHI,(CODE NAME:KM)";
cout<<endl<<"WHAT TYPE OF MISCELLANEOUS PRODUCT U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(omp);
cout<<endl<<"ENTER THE QUANTITY OF "<<omp<<":";
cin>>mqty;
if(strcmp(omp,"JA")==0)f=30*mqty;
if(strcmp(omp,"TA")==0)f=200*mqty;
if(strcmp(omp,"RA")==0)f=200*mqty;
if(strcmp(omp,"CA")==0)f=400*mqty;
if(strcmp(omp,"PI")==0)f=200*mqty;
if(strcmp(omp,"COM")==0)f=530*mqty;
if(strcmp(omp,"KM")==0)f=120*mqty;
cout<<endl<<"THE PRICE OF UR  PRODUCT IS:"<<f;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void tuveg()
{
char tbr[2];
double c,tbrqty;
clrscr();
cout<<endl<<"THE TUBER TYPE VEGE'S ARE:";
cout<<endl<<"BEETROOT,(CODE NAME:BE)";
cout<<endl<<"CARROT,(CODE NAME:CR)";
cout<<endl<<"PARSNIPS,(CODE NAME:PR)";
cout<<endl<<"POTATOES,(CODE NAME:PT)";
cout<<endl<<"YAMS,(CODE NAME:YM)";
cout<<endl<<"PLEASE ENTER THE TUBER YOU WANT:";
gets(tbr);
cout<<endl<<"ENTER THE QUANTITY OF "<<tbr<<":";
cin>>tbrqty;
if(strcmp(tbr,"BE")==0)c=36*tbrqty;
if(strcmp(tbr,"CR")==0)c=39*tbrqty;
if(strcmp(tbr,"PR")==0)c=69*tbrqty;
if(strcmp(tbr,"PT")==0)c=55*tbrqty;
if(strcmp(tbr,"YM")==0)c=45*tbrqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING SUNLOFT PAVILLION.INC HAVE A NICE DAY!";
}

void main()
{

load();
clrscr();
cout<<endl<<"ENTER 1 FOR BUYING VEGETABLES!";
cout<<endl<<"ENTER 2 FOR BUYING FURITS!";
cout<<endl<<"ENTER 3 FOR BUYING GROCERIES!";
cout<<endl<<"WHAT DO YOU WANT?:";
int q;
cin>>q;
//do{
switch(q)
{
case 1:    load();
	   cout<<endl<<"FOR UR REFFERENCE, THE TYPE OF VEGES WE HAVE ARE AS FOLLOWS:";
	   cout<<endl<<" ENTER 1 FOR ROOT TYPE";
	   cout<<endl<<" ENTER 2 FOR FLOWER TYPE";
	   cout<<endl<<" ENTER 3 FOR LEAVES TYPE";
	   cout<<endl<<" ENTER 4 FOR TUBER TYPE";
	   cout<<endl<<" ENTER 5 FOR SEED TYPE";
	   cout<<endl<<" ENTER 6 FOR BULB TYPE";
	   cout<<endl<<"WHAT TYPE OF VEGETABLE U WANNA BUY? :";
	   cin>>type;
	   switch(type)
	   {
	    case 1:roveg();break;
	    case 2:floveg();break;
	    case 3:tuveg();break;
	    case 4:bubveg();break;
	    case 5:seveg();break;
	    case 6:leveg();break;
	   } break;

case 2:    load();
	   cout<<endl<<"FOR UR REFFERENCE, THE TYPE OF FURITS WE HAVE ARE AS FOLLOWS:";
	   cout<<endl<<" ENTER 1 FOR CITRUS FURITS";
	   cout<<endl<<" ENTER 2 FOR STONE FURITS";
	   cout<<endl<<" ENTER 3 FOR TROPICAL AND EXORTIC FURITS";
	   cout<<endl<<" ENTER 4 FOR BERRIES FURITS";
	   cout<<endl<<" ENTER 5 FOR MELONS";
	   cout<<endl<<"WHAT TYPE OF FRUITS U WANNA BUY? :";
	   int fur;
	   cin>>fur;
	   switch(fur)
	   {
	    case 1:citfur();break;
	    case 2:stfur();break;
	    case 3:trexfur();break;
	    case 4:berr();break;
	    case 5:mel();break;
	   }
	   break;

case 3:    load();
	   cout<<endl<<"FOR UR REFFERENCE, THE TYPE OF GROCERIES WE HAVE ARE AS FOLLOWS:";
	   cout<<endl<<"ENTER 1 FOR GRAINS";
	   cout<<endl<<"ENTER 2 FOR LEGUMES";
	   cout<<endl<<"ENTER 3 FOR SPICES";
	   cout<<endl<<"ENTER 4 FOR READYMADE POWDERED SPICES";
	   cout<<endl<<"ENTER 5 FOR OILS";
	   cout<<endl<<"ENTER 6 FOR FRESH AND FROZEN PRODUCTS";
	   cout<<endl<<"ENTER 7 FOR OTHER MISCELLANEOUS PRODUCTS";
	   cout<<endl<<"ENTER UR OPINION:";
	   cin>>op;
	   switch(op)
	   {
	    case 1:gr();break;
	    case 2:le();break;
	    case 3:sp();break;
	    case 4:rps();break;
	    case 5:oil();break;
	    case 6:ffp();break;
	    case 7:omp();break;
	   }break;

default : cout<<endl<<"PLEASE ENTER A VALID NUMBER!";break;
}
cout<<endl<<"PLEASE ENTER 's' OR 'S' TO RETURN TO THE MENU!:";
cin>>m;
//}while(m=='s'||m=='S');

