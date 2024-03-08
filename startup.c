#include <stdio.h>
int main()
{
    int tempo;
    int zona;
    printf("Benvenuto in DatePlanner\n Organizza il tuo romantico appuntamento\n");
    printf("Da quanto tempo state insieme ?\n 1) Meno di 6 mesi\n 2) 1-2 anni\n 3) 3+ anni\n");
    scanf("%d",&tempo );
    printf("%d tempo\n", tempo);
     if (tempo!=1 && tempo!=2 && tempo!=3)
    {
    printf("error");
    }
    printf("In che zona la vuoi portare?\n 1)Roma nord\n 2) Roma centro\n 3) Roma sud\n");
    scanf("%d",&zona);
    printf("%d zona\n", zona);
    if(tempo==1 && zona==1)
    {
    printf("La tua relazione è ancora all'inizio\n ecco dove portarla a Roma Nord per impressionarla.\n");
    printf("1. Ponte Milvio\n Ponte Milvio è conosciuto anche come il luogo dei Lucchetti dell'Amore.\n Gli innamorati si recano qui per Sigillare il loro Amore attaccando un lucchetto sulla ringhiera del ponte e gettando la chiave nelle acque del fiume de Roma, simboleggiando un'Amore eterno.\n Inoltre Ponte Milvio è circondato da incantevoli bar e ristoranti dove passare bei momenti con la tua ragazza.\n "); 
    printf("2. Villa Borghese\n Villa Borghese è un'oasi di romanticismo e bellezza situata a Roma nord.\n I romantici sentieri ti conducono a meraviglie nascoste, come romantici laghetti, fontane e statue classiche.\n Luoghi ideali dove viveree i primi momenti insieme.\n");
    printf("3. Piazza delle Muse\n Piazza delle Muse è il luogo ideale se il tuo obbiettivo è quello di lasciare la tua ragazza a bocca aperta, infatti dalle ringhiere lì presenti si ha una vista meravigliosa di metà Roma vista dall'alto.\n");
    }
    else if(tempo==1 && zona==2)
    {
     printf("La tua relazione è ancora all'inizio\n ecco dove portarla a Roma Centro per impressionarla.\n");
     printf("1. Terrazza del Pincio\n La Terrazza del Pincio, affacciata su uno dei panorami più mozzafiato di Roma, incanta gli innamorati con la sua vista spettacolare e il suo fascino senza tempo.\n.In questo luogo incantevole, il tempo sembra fermarsi, consentendo agli amanti di condividere momenti di pura bellezza e amore.\n");
     printf("2. Giardino degli Aranci\n Il Giardino degli Aranci, incastonato sull'Aventino, regala agli innamorati un'oasi di tranquillità e bellezza nel cuore di Roma.\n Con i suoi alberi di aranci che profumano dolcemente l'aria e la vista mozzafiato sulla città eterna.\n  Le coppie possono passeggiare mano nella mano lungo i viali alberati, godendo di un atmosfera perfetta per un appuntamento memorabile.\n");
     printf("3. Fontana di Trevi\n La Fontana di Trevi, incanta gli innamorati con la sua maestosità e il suo fascino senza tempo.\n Le luci soffuse e l'architettura imponente creano un'atmosfera magica, invitando gli amanti a perdere lo sguardo l'uno nell'altro e a sognare insieme sotto il cielo stellato di Roma.\n");
    }
    else if(tempo==1 && zona==3)
    {
        printf("La tua relazione è ancora all'inizio\n ecco dove portarla a Roma Sud per impressionarla.\n");
        printf("1. Il Parco Regionale dell'Appia Antica\n Il Parco Regionale dell'Appia Antica è una gemma nascosta di natura e storia nell'incantevole zona sud di Roma.\n Con le sue antiche rovine, i maestosi pini e i campi aperti, questo parco offre una cornice romantica per una passeggiata indimenticabile con la tua ragazza.\n");
        printf("2. Il Parco Degli Acquedotti\n Il Parco degli Acquedotti è un luogo di suggestiva bellezza dove la natura si fonde armoniosamente con l'antica grandezza dell'ingegneria romana.\n In questo ambiente suggestivo e tranquillo, potrete condividere momenti preziosi e creare ricordi indimenticabili insieme alla persona amata.\n");
    }
   
   
   
    if(tempo==2 && zona==1)
    {
        printf("Ormai state insieme da un pò.\n Cercate un luogo dove rilassarvi e godere di buon cibo?\n Siete nel posto giusto!\n Adesso ci pensiamo noi, ecco tre ristoranti che fanno per voi ");
        printf("1. Ristorante Ai Piani €€€\n Per gli innamorati del mare e delle esperienze gastronomiche indimenticabili, il ristorante di pesce Ai Piani a Roma è un'incantevole romantica destinazione con il loro menu ricco di prelibatezze uniche dalla freschezza del mare direttamente alla vostra tavola.\n Ogni piatto è un viaggio sensoriale che unisce amore e passione per il cibo. Un'esperienza culinaria da condividere con il vostro partner, per creare ricordi preziosi in uno dei luoghi più suggestivi di Roma.\n");
        printf("2. Ristorante La Taverna Rossini €€\n la Taverna Rossini, un'autentica osteria nel cuore di Roma. Con il suo fascino tradizionale e l'atmosfera accogliente, vi invitiamo a gustare i sapori genuini della cucina italiana.\n Dai piatti classici della tradizione romana alle specialità regionali, ogni piatto è preparato con ingredienti freschi e di alta qualità, con il suo ambiemnte rustico e familiare è perfetto per un bel pranzetto al bacio <3\n");
        printf("3. Ristorante Fiore di Zucca €€\n Benvenuti al Ristorante Fiore di Zucca, un'oasi gastronomica nella zona dei Parioli di Roma.\n Con il suo ambiente accogliente e l'atmosfera raffinata, il Fiore di Zucca offre un viaggio culinario attraverso i sapori autentici dell'Italia.\n Dai piatti classici alle creazioni innovative dello chef, ogni boccone è un'esplosione di gusto e creatività.\n"); 


    }    
    else if(tempo==2 && zona==2)
    {
        printf("Ormai state insieme da un pò.\n Cercate un luogo dove rilassarvi e godere di buon cibo?\n Siete nel posto giusto!\n Adesso ci pensiamo noi, ecco tre ristoranti che fanno per voi ");
        printf("1. Hotel De Russie €€€\n Entrando allínterno dell'Hotel De Russie troverai un gioiello gastronomico nel cuore di Roma. Con il suo elegante design e l'atmosfera raffinata, il De Russie offre un'esperienza culinaria unica che fonde tradizione e innovazione.\n  Con il suo servizio impeccabile e l'ambiente sofisticato, il De Russie è il luogo ideale per una cena romantica. Vi consigliamo di andare a scoprire il lusso e il gusto al Ristorante De Russie.\n"); 
    }   printf("2. Ginger €€\n Con il suo design moderno e l'atmosfera vivace, Ginger offre un'esperienza culinaria unica che unisce tradizione e innovazione.\n Con un servizio attento e cordiale e un'ambiente accogliente, Ginger è il luogo ideale per condividere momenti speciali con la propria ragazza. Scoprite l'eccellenza culinaria al Ristorante Ginger.\n"); 
        printf("3. The Court €€\n The Court è un ristorante esclusivo che offre una vista mozzafiato sul Colosseo, simbolo eterno di Roma.\n Situato strategicamente per offrire agli ospiti un'esperienza culinaria senza pari, il ristorante combina la magnificenza del panorama con piatti raffinati e un servizio impeccabile./n"); 
    else if(tempo==2 && zona==3)
    {
        printf(" "); 
    } 
    
    
    
    if(tempo==3 && zona==1)
    {
        printf(" ");
    }    
    else if(tempo==3 && zona==2)
    {
        printf(" ");
    }    
    else if(tempo==3 && zona==3)
    {
        printf(" ");
    }    



















 }
