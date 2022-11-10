# ----------------------------------------------- #
    ### GENERAZIONE DI UN MAZZO DI CARTE ###
# ----------------------------------------------- #

# 10 Valori: 1,2,3,4,5,6,7, 8-> fante, 9-> cavallo, 10 -> re 
# 4 Semi: denari bastoni spade coppe

semi = ["Denari", "Bastoni", "Spade", "Coppe"]
valori = [1,2,3,4,5,6,7,8,9,10]
# In maniera equivalente si poteva creare l'array di valori usando la funzione range(): 
# valori = range(1, 10) 
# per visualizzare, cioò printare a schermo, una lista ->  print(list(valori))

# Per generare un mazzo di carte un'opzione è pensare che ogni carta sia una lista 
# avente come primo elemento il valore e come secondo elemento il seme
mazzoCarte = []
for val in valori:
    for seme in semi:
        mazzoCarte.append([val, seme])

# Per vedere il mazzo di carte: 
# print(list(mazzoCarte))



# ----------------------------------------------- #
    ### COME REALIZZARE UNA PARTITA ###
# ----------------------------------------------- #

# fase 1:   pesco 3 carte io e 3 il computer 
# fase 2:   estraggo la briscola 
# fase 3:   si estrae chi inizia per primo
# ----------
# fase 4:   il giocatore a cui tocca gioca una carta
# fase 5:   il giocatore successivo gioca una carta
# fase 6:   si determina chi ha vinto la manche
# fase 7:   si verifica se la partita è finita 
# fase 8:   se la partita non è finita si riparte dalla <fase 3> 


###    FASE 1:   pesco 3 carte io e 3 il computer 
# Conviene notare subito che l'operazione di estrazione dal mazzo avviene diverse volte nel corso
# di una partita 
# -> Allora conviene creare una funzione che svolga questo compito

from random import randint # importo la funzione randint dalla libreria random

def estraiCarta(mazzo):
    indice = randint(0, len(mazzo)-1)
    return mazzo.pop(indice)

# print(estraiCarta(mazzoCarte))

# Per estrarre tre carte posso chiamare tre volte la funzione estraiCarta 
for i in range(3):
    primaCarta= estraiCarta(mazzoCarte)
    secondaCarta= estraiCarta(mazzoCarte)
    terzaCarta= estraiCarta(mazzoCarte)

# print(primaCarta, " ", secondaCarta, " ", terzaCarta)

# La mano iniziale di ogni giocatore è composta da 3 carte. Queste possono essere salvate in un array
carteGiocatore = []
carteComputer = []
for i in range(3):
    carteGiocatore.append(estraiCarta(mazzoCarte))
    carteComputer.append(estraiCarta(mazzoCarte))



###    FASE 2:    estrazione della briscola 

# corrisponde semplicemente all'estrazione di una carta 
cartaBriscola = estraiCarta(mazzoCarte)
semeBriscola = cartaBriscola[1]

print("La carta briscola è:  ", cartaBriscola[0], " di ", cartaBriscola[1])

### FASE 3:   si estrae un numero per decidere chi inizia per primo

num = randint(1,2)
if num == 1: 
    primoGiocatore = "giocatore"
else: 
    primoGiocatore = "computer"

# In maniera equivalente
# primoGiocatore = "giocatore" if randint(1,2) == 1 else "computer"



### FASE 4 e 5:   il giocatore a cui tocca gioca una carta e il giocatore successivo gioca una carta

# nel caso in cui sia il computer a dover decidere semplifichiamo facendogli sempre giocare una carta a caso 
# nel caso in cui sia il giocatore a dover decidere: serve implementare l'interazione con l'utente 
#   ->  richiedere la scelta della carta tra quelle a disposizione
 
# Caso computer
cartaGiocataComputer = estraiCarta(carteComputer)

print("Il computer ha giocato la carta: ", cartaGiocataComputer[0], " di ", cartaGiocataComputer[1])

# Caso giocatore 
print("Digita il numero corrispondente a sinistra della carta che vuoi giocare.")
i= 1
for carta in carteGiocatore:
    print("\t<-", i, "->  ", carta[0], " di ", carta[1])
    i= i+1
indiceCarta = int(input()) - 1
cartaGiocataGiocatore = carteGiocatore[indiceCarta]
print("Hai scelto di giocare: ",cartaGiocataGiocatore[0], " di ", cartaGiocataGiocatore[1])

###  FASE 6:   si determina chi ha vinto la manche

# ATTENZIONE!!!  Il codice qui sotto è da sistemare:
# al momento in caso di parità di seme vince la carta con valore più alto, 
# ma l'asso ed il 3 sono più alti rispetto agli altri

def detCartaVincente(carta1, carta2, semeBrisc):
    if carta1[1] == semeBrisc and carta2[1] != semeBrisc: # se la prima è briscola e la seconda no
        return carta1
    if carta1[1] != semeBrisc and carta2[1] == semeBrisc: # se la prima carta non è briscola e la seconda si
        return carta2
    if carta1[1] == carta2[1]:  # se hanno lo stesso seme, vince quella più alta di valore 
        if carta1[0] > carta2[0]:
            return carta1
        else:
            return carta2
    return carta1 # Vince la prima carta giocata che deve essere passata come primo argomento alla funzione

cartaVincente = detCartaVincente(cartaGiocataComputer, cartaGiocataGiocatore, semeBriscola)
print("La carta vincente è:  ", cartaVincente[0], " di ", cartaVincente[1])

if cartaGiocataGiocatore == cartaVincente:
    giocatoreVincente = "giocatore"
else:
    giocatoreVincente = "computer"

print("La manche è stata vinta dal " + giocatoreVincente)


### FASE 7:   si verifica se la partita è finita 

# La partita finisce se: 
#   1) un giocatore ha raggiunto i 60 punti
#   2) i giocatori non hanno più carte in mano 

# ci si accorge quindi che esistono FASI che nella stesura iniziale non erano state considerate 
# per esempio come gestire la partita quando non ci sono più carte nel mazzo

# (1)  serve tener traccia dei punti accumulati
def getPunti(carta): 
    if carta[0] == 1: # ASSO
        return 11
    if carta[0] == 3: # TRE
        return 10
    if carta[0] == 10: # RE
        return 4
    if carta[0] == 9: # CAVALLO
        return 3
    if carta[0] == 8: # Fante
        return 2
    return 0

puntiGiocatore = 0
puntiComputer = 0
if giocatoreVincente == "giocatore":
    puntiGiocatore += getPunti(cartaGiocataGiocatore) + getPunti(cartaGiocataComputer)
else:
    puntiComputer += getPunti(cartaGiocataGiocatore) + getPunti(cartaGiocataComputer)

# (2) 
# Innanzitutto quando il mazzo è finito la funzione estraiCarta() potrebbe dare problemi 
# se cerco di estrarre una carta da un mazzo vuoto


#####
#####   DATI TUTTI QUESTI BLOCCHETTI, ORA BISOGNA UNIRLI  
#####