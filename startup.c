#include <stdio.h>
int main()
{
    int tempo;
    int zona;
    char skip;
    printf("Benvenuto in DatePlanner\nOrganizza il tuo romantico appuntamento\n");
    printf("Da quanto tempo state insieme ?\n 1) Meno di 6 mesi\n 2) 1-2 anni\n 3) 3+ anni\n");
    scanf("%d",&tempo );
   
     if (tempo!=1 && tempo!=2 && tempo!=3)
    {
    printf("error");
    }
    printf("In che zona la vuoi portare?\n 1)Roma nord\n 2) Roma centro\n 3) Roma sud\n");
    scanf("%d",&zona);
    
    if(tempo==1 && zona==1)
    {
    printf("\n\nLa tua relazione è ancora all'inizio\necco dove portarla a Roma Nord per impressionarla.\n");
    printf("\n1. Ponte Milvio\nPonte Milvio è conosciuto anche come il luogo dei Lucchetti dell'Amore.\nGli innamorati si recano qui per Sigillare il loro Amore attaccando un lucchetto sulla ringhiera del ponte e gettando la chiave nelle acque del fiume de Roma, simboleggiando un'Amore eterno.\nInoltre Ponte Milvio è circondato da incantevoli bar e ristoranti dove passare bei momenti con la tua ragazza.\n "); 
    printf("\n2. Villa Borghese\nVilla Borghese è un'oasi di romanticismo e bellezza situata a Roma nord.\nI romantici sentieri ti conducono a meraviglie nascoste, come romantici laghetti, fontane e statue classiche.\nLuoghi ideali dove viveree i primi momenti insieme.\n");
    printf("\n3. Piazza delle Muse\nPiazza delle Muse è il luogo ideale se il tuo obbiettivo è quello di lasciare la tua ragazza a bocca aperta, infatti dalle ringhiere lì presenti si ha una vista meravigliosa di metà Roma vista dall'alto.\n");
    }
    else if(tempo==1 && zona==2)
    {
     printf("\n\nLa tua relazione è ancora all'inizio\necco dove portarla a Roma Centro per impressionarla.\n");
     printf("\n1. Terrazza del Pincio\nLa Terrazza del Pincio, affacciata su uno dei panorami più mozzafiato di Roma, incanta gli innamorati con la sua vista spettacolare e il suo fascino senza tempo.\n.In questo luogo incantevole, il tempo sembra fermarsi, consentendo agli amanti di condividere momenti di pura bellezza e amore.\n");
     printf("\n2. Giardino degli Aranci\nIl Giardino degli Aranci, incastonato sull'Aventino, regala agli innamorati un'oasi di tranquillità e bellezza nel cuore di Roma.\nCon i suoi alberi di aranci che profumano dolcemente l'aria e la vista mozzafiato sulla città eterna.\nLe coppie possono passeggiare mano nella mano lungo i viali alberati, godendo di un atmosfera perfetta per un appuntamento memorabile.\n");
     printf("\n3. Fontana di Trevi\nLa Fontana di Trevi, incanta gli innamorati con la sua maestosità e il suo fascino senza tempo.\nLe luci soffuse e l'architettura imponente creano un'atmosfera magica, invitando gli amanti a perdere lo sguardo l'uno nell'altro e a sognare insieme sotto il cielo stellato di Roma.\n");
    }
    else if(tempo==1 && zona==3)
    {
        printf("\n\nLa tua relazione è ancora all'inizio\necco dove portarla a Roma Sud per impressionarla.\n");
        printf("\n1. Il Parco Regionale dell'Appia Antica\nIl Parco Regionale dell'Appia Antica è una gemma nascosta di natura e storia nell'incantevole zona sud di Roma.\nCon le sue antiche rovine, i maestosi pini e i campi aperti, questo parco offre una cornice romantica per una passeggiata indimenticabile con la tua ragazza.\n");
        printf("\n2. Il Parco Degli Acquedotti\nIl Parco degli Acquedotti è un luogo di suggestiva bellezza dove la natura si fonde armoniosamente con l'antica grandezza dell'ingegneria romana.\nIn questo ambiente suggestivo e tranquillo, potrete condividere momenti preziosi e creare ricordi indimenticabili insieme alla persona amata.\n");
    }
   
   
   
    if(tempo==2 && zona==1)
    {
        printf("\n\nOrmai state insieme da un pò.\nCercate un luogo dove rilassarvi e godere di buon cibo?\nSiete nel posto giusto!\nAdesso ci pensiamo noi, ecco tre ristoranti che fanno per voi\n");
        printf("\n1. Ristorante Ai Piani €€€\nPer gli innamorati del mare e delle esperienze gastronomiche indimenticabili, il ristorante di pesce Ai Piani a Roma è un'incantevole romantica destinazione con il loro menu ricco di prelibatezze uniche dalla freschezza del mare direttamente alla vostra tavola.\nOgni piatto è un viaggio sensoriale che unisce amore e passione per il cibo. Un'esperienza culinaria da condividere con il vostro partner, per creare ricordi preziosi in uno dei luoghi più suggestivi di Roma.\n");
        printf("\n2. Ristorante La Taverna Rossini €€\nLa Taverna Rossini, un'autentica osteria nel cuore di Roma. Con il suo fascino tradizionale e l'atmosfera accogliente, vi invitiamo a gustare i sapori genuini della cucina italiana.\nDai piatti classici della tradizione romana alle specialità regionali, ogni piatto è preparato con ingredienti freschi e di alta qualità, con il suo ambiemnte rustico e familiare è perfetto per un bel pranzetto al bacio <3\n");
        printf("\n3. Ristorante Fiore di Zucca €€\nBenvenuti al Ristorante Fiore di Zucca, un'oasi gastronomica nella zona dei Parioli di Roma.\nCon il suo ambiente accogliente e l'atmosfera raffinata, il Fiore di Zucca offre un viaggio culinario attraverso i sapori autentici dell'Italia.\nDai piatti classici alle creazioni innovative dello chef, ogni boccone è un'esplosione di gusto e creatività.\n"); 


    }    
    else if(tempo==2 && zona==2)
    {
        printf("\n\nOrmai state insieme da un pò.\nCercate un luogo dove rilassarvi e godere di buon cibo?\nSiete nel posto giusto!\nAdesso ci pensiamo noi, ecco tre ristoranti che fanno per voi\n ");
        printf("\n1. Hotel De Russie €€€\nEntrando all'interno dell'Hotel De Russie troverai un gioiello gastronomico nel cuore di Roma. Con il suo elegante design e l'atmosfera raffinata, il De Russie offre un'esperienza culinaria unica che fonde tradizione e innovazione.\nCon il suo servizio impeccabile e l'ambiente sofisticato, il De Russie è il luogo ideale per una cena romantica. Vi consigliamo di andare a scoprire il lusso e il gusto al Ristorante De Russie.\n"); 
        printf("\n2. Ginger €€\nCon il suo design moderno e l'atmosfera vivace, Ginger offre un'esperienza culinaria unica che unisce tradizione e innovazione.\nCon un servizio attento e cordiale e un'ambiente accogliente, Ginger è il luogo ideale per condividere momenti speciali con la propria ragazza. Scoprite l'eccellenza culinaria al Ristorante Ginger.\n"); 
        printf("\n3. The Court €€\nThe Court è un ristorante esclusivo che offre una vista mozzafiato sul Colosseo, simbolo eterno di Roma.\nSituato strategicamente per offrire agli ospiti un'esperienza culinaria senza pari, il ristorante combina la magnificenza del panorama con piatti raffinati e un servizio impeccabile.\n"); 
    }
    else if(tempo==2 && zona==3)
    {
        printf("\n\nOrmai state insieme da un pò.\nCercate un luogo dove rilassarvi e godere di buon cibo?\nSiete nel posto giusto!\nAdesso ci pensiamo noi, ecco tre ristoranti che fanno per voi\n ");
        printf("\n1. Ristorante la Quintessa €€\nIl Ristorante La Quintessa è in grado di offrire una location davvero piacevole, con una splendida selezione di accessori e complementi che circondano i nostri ospiti, frutto di una ricerca maturata in trent'anni.\nLa vostra permanenza sarà ancora più gradevole, in un contesto già ammaliante come quello del lago di Castel Gandolfo.\n"); 
        printf("\n2. Hanami sushi €€\nHanami in gergo giapponese significa: la visione della fioritura dell'albero di ciliegio. Nel cuore del laghetto dell'Eur nasce “Hanami Sushi Restaurant”.\nUn ristorante fusion giapponese nel quale la tradizionale cucina nipponica incontra la cucina pechinese, per fondersi in una combinazione moderno-europea.\nUn mix di stili sensazionali, con l'intento di regalare ai  clienti un'esperienza unica.\n");
        printf("\n3. Casa Novecento €€\nCasa Novecento vuole essere un luogo dove l'atmosfera, il calore e l'ambientazione vi farà sentire come a casa. Nel cuore dell'Eur a pochi passi dall'obelisco, nuova città delle attività produttive di Roma Capitale, in una cornice di grande prestigio architettonico, la nuova realtà ristorativa si propone come idea per ogni appuntamento legato alla convivialità.Casa Novecento è un connubio tra tradizione e modernità, dai colori caldi dove ogni giorno gli ospiti potranno trovare il menù scritto sulla tradizionale lavagna, accolti dallo staff gentile e professionale a testimoniare che l'antica tradizione rimane immutata.\n ");
    } 
    
    
    
    if(tempo==3 && zona==1)
    {
        printf("\n\nInnamorati, vogliamo rendere ogni istante speciale. Accettate la sfida ?\n");
        printf("\nVisita all'Auditorium.\nL'Auditorium Parco della Musica di Roma è uno dei principali complessi culturali della città.\nOltre alle sale per spettacoli, l'Auditorium include anche spazi per mostre d'arte, conferenze, workshop e altri eventi culturali. Il complesso è immerso in un ampio parco pubblico, che offre un ambiente piacevole per passeggiate e momenti di relax.\n");
        printf("\n Visita al Bioparco\nIl Bioparco ospita circa 1200 animali di circa 150 specie tra rettili, mammiferi e uccelli. Sono tutti animali nati presso il Bioparco o presso altre strutture zoologiche.\nDa molti anni, infatti, la concezione di Zoo è cambiata e gli animali non vengono più acquistati o prelevati nel loro habitat naturale.\n");
    }    
    else if(tempo==3 && zona==2)
    {
        printf("\n\nInnamorati, vogliamo rendere ogni istante speciale. Accettate la sfida ?\n");
        printf("\nTrilussa Palace Hotel & SPA\nIl Trilussa Palace Hotel Wellness & Spa di Roma mette a disposizione in formula esclusiva e privata dei propri ospiti 3 aree Wellness & Spa a tema:\n-Domus (60m2) è il centro benessere ispirato agli antichi splendori di Roma;\n-Moon (100m2) è la Spa emozionale, dotata di nuove tecnologie che creano un'atmosfera di grande effetto;\n-Maya (100m²) ispirata alla cultura della popolazione precolombiana.\n");
        printf("\nSuite Sistina For Brave Lovers\nDedichiamo Suite Sistina For Brave Lovers a tutte quelle persone che esprimono il proprio amore per la vita attraverso le attenzionie la cura del partner.\nE proprio in questa dinamica di coppia che abbiamo creato il nostro mondo dove l'intrigo, la complicitàe il gioco diventano momenti di intima trasgressione.\nMa anche dove il mistero della seduzione e della sensualitàaccompagnano i momenti di maggior tenerezza.\n");
    }    
    else if(tempo==3 && zona==3)
    {
         printf("\n\nInnamorati, vogliamo rendere ogni istante speciale. Accettate la sfida ?\n");
         printf("\nPlanetario\nUn'esperienza di osservazione collettiva promossa da Roma Capitale, Assessorato alla Crescita culturale - Sovrintendenza Capitolina ai Beni Culturali, per coinvolgere il pubblico invitandolo all'osservazione del cielo stellato di Roma dalla propria abitazione.\n");
         printf("\nMenù degustazione presso De Sanctis\nDal mattino fino a tarda sera, i suoi rinnovati ambienti, tra il vintage e il moderno, e il fragrante profumo proveniente dal laboratorio artigianale, accolgono gli ospiti alla ricerca di una colazione golosa, di un pranzo ricco ma veloce, di una pausa merenda genuina o un rilassante aperitivo conviviale, fino ad arrivare all'offerta serale, caratterizzata da delizie gastronomiche, cocktail e degustazioni delle più note e interessanti etichette di birre artigianali, liquori e vini.\n");
    
    }    


    scanf("%c", &skip);
    scanf("%c", &skip);
    printf("Questi sono solo alcuni dei luoghi più famosi a Roma, se volete ricevere luoghi meno famosi ma molto affascinanti potete iscrivervi alla nostra versione premium pagando 6.99€");
















 }