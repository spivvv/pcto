#include <stdio.h>
int main()
{
    int tempo;
    int zona;
    printf("Benvenuto in DatePlanner\n Organizza il tuo romantico appuntamento\n");
    printf("Da quanto tempo state insieme ?\n 1) Meno di 6 mesi\n 2) 1-2 anni\n 3) 3+ anni\n");
    scanf("%d",&tempo );
     if (tempo!=1 && tempo!=2 && tempo!=3)
    {
    printf("error");
    }
    printf("In che zona la vuoi portare?\n 1)Roma nord\n 2) Roma centro\n 3) Roma sud\n");
    scanf("%d",&zona);
    if(tempo=1 && zona==1)
    {
    printf("La tua relazione è ancora all'inizio\n ecco dove portarla a Roma nord per impressionarla.\n");
    printf("1. Ponte Milvio\n Ponte Milvio è conosciuto anche come il luogo dei Lucchetti dell'Amore.\n Gli innamorati si recano qui per Sigillare il loro Amore attaccando un lucchetto sulla ringhiera del ponte e gettando la chiave nelle acque del fiume de Roma, simboleggiando un'Amore eterno.\n Inoltre Ponte Milvio è circondato da incantevoli bar e ristoranti dove passare bei momenti con la tua ragazza.\n "); 
    printf("2. Villa Borghese\n Villa Borghese è un'oasi di romanticismo e bellezza situata a Roma nord.\n I romantici sentieri ti conducono a meraviglie nascoste, come romantici laghetti, fontane e statue classiche.\n Luoghi ideali dove viveree i primi momenti insieme.\n");
    printf("3. Piazza delle Muse\n Piazza delle Muse è il luogo ideale se il tuo obbiettivo è quello di lasciare la tua ragazza a bocca aperta, infatti dalle ringhiere lì presenti si ha una vista di metà Roma vista dall'alto.\n");
    }
    if(tempo=1 && zona==2)
    {
     printf("Per quanto riguarda Roma centro ecco a te tre luoghi fantastici per i primi momenti insieme.\n");
     printf("1. Terrazza del Pincio\n La Terrazza del Pincio, affacciata su uno dei panorami più mozzafiato di Roma, incanta gli innamorati con la sua vista spettacolare e il suo fascino senza tempo.\n.In questo luogo incantevole, il tempo sembra fermarsi, consentendo agli amanti di condividere momenti di pura bellezza e amore.\n");
     printf("2. Giardino degli Aranci\n Il Giardino degli Aranci, incastonato sull'Aventino, regala agli innamorati un'oasi di tranquillità e bellezza nel cuore di Roma.\n Con i suoi alberi di aranci che profumano dolcemente l'aria e la vista mozzafiato sulla città eterna.\n  Le coppie possono passeggiare mano nella mano lungo i viali alberati, godendo di un atmosferaperfettaper un appuntamento memorabile.\n");
     printf("3. Fontana di Trevi\n La Fontana di Trevi, incanta gli innamorati con la sua maestosità e il suo fascino senza tempo.\n Le luci soffuse e l'architettura imponente creano un'atmosfera magica, invitando gli amanti a perdere lo sguardo l'uno nell'altro e a sognare insieme sotto il cielo stellato di Roma.");
    }
    if(tempo=1 && zona==3)
    {
        printf("Per quanto riguarda Roma sud ecco a te due luoghi perfetti per un appuntamento.\n");
        printf("1. Il Parco Regionale dell'Appia Antica\n Il Parco Regionale dell'Appia Antica è una gemma nascosta di natura e storia nell'incantevole zona sud di Roma.\n Con le sue antiche rovine, i maestosi pini e i campi aperti, questo parco offre una cornice romantica per una passeggiata indimenticabile con la tua ragazza.\n");
        printf("2. Il Parco Degli Acquedotti\n Il Parco degli Acquedotti è un luogo di suggestiva bellezza dove la natura si fonde armoniosamente con l'antica grandezza dell'ingegneria romana.\n In questo ambiente suggestivo e tranquillo, potrete condividere momenti preziosi e creare ricordi indimenticabili insieme alla persona amata.\n");
    }
   
   
   
    if(tempo=2 && zona==1)
    {
        printf(" ");
    }    
    if(tempo=2 && zona==2)
    {
        printf(" "); 
    }  
    if(tempo=2 && zona==3)
    {
        printf(" "); 
    } 
    
    
    
    if(tempo=3 && zona==1)
    {
        printf(" ");
    }    
    if(tempo=3 && zona==2)
    {
        printf(" ");
    }    
    if(tempo=3 && zona==3)
    {
        printf(" ");
    }    



















 }
