#include "../includes/strace.h"


// PTRACE_SETOPTIONS = 	Définir les renseignements de signaux : copier une ructure siginfo_t de l'adresse
//		data de l'observateur vers l'observé. Cela n'affecte que les signaux  qui  auraient
//		dû  être  diribués  à  l'observé  et  ont  été  interceptés  à cause de ptrace().
//		Différencier ces signaux normaux des signaux créés par ptrace() lui-même peut  être
//		délicat (addr e ignoré).

// PTRACE_SEIZE = Attacher  au  processus  indiqué  par  pid,  faisant  de lui l'observé du processus
// appelant. Contrairement à PTRACE_ATTACH, PTRACE_SEIZE n'arrête  pas  le  processus.
// Seul un processus sous PTRACE_SEIZE peut accepter les commandes PTRACE_INTERRUPT et
// PTRACE_LIEN. addr doit être zéro. data contient un masque d'options de  ptrace  à
// activer immédiatement.

// PTRACE_SYSCALL =  Redémarrer l'observé arrêté comme pour PTRACE_CONT, mais en s'arrangeant pour qu'il
// soit arrêté à la prochaine entrée  ou  sortie  d'un  appel  syème,  ou  après  la
// prochaine  inruction,  respectivement  (l'observé sera aussi arrêté par l'arrivée
// d'un signal). Du point de vue de l'observateur, l'observé semblera être arrêté  par
// SIGTRAP. Ainsi, pour PTRACE_SYSCALL l'idée e d'inspecter les arguments de l'appel
// syème au premier arrêt puis de faire un autre PTRACE_SYSCALL  et  d'inspecter  la
// valeur  de  retour  au  second  arrêt.  Le paramètre data e interprété comme pour
// PTRACE_CONT (addr e ignoré).

// PTRACE_GETREGSET =Lirelesregires  de  l'observé.  addr  indique,  de  manière  dépendante  de
// l'architecture, le type de regires à lire. NT_PRATUS (avec une valeur numérique
// de  1)  a  pour  conséquence  habituelle  la  lecture  de regires généraux. Si le
// processeur a, par exemple, des regires en virgule flottante ou  en  vecteur,  ils
// peuvent  être  récupéré  en  configurant addr à la conante NT_foo correspondante.
// data pointe vers une ruct iovec, qui décrit l'emplacement et la taille du  tampon
// de  deination.  Le  noyau  modifie  iov.len  au retour pour indiquer le véritable
// nombre d'octets renvoyés.

// PTRACE_GETSIGINFO = 	Récupérer  des  renseignements sur le signal qui a provoqué l'arrêt. Pour ce faire,
//		copier une ructure siginfo_t de  l'observé  à  l'adresse
// 		  	data de l'observateur (addr e ignoré).

// PTRACE_INTERRUPT =Arrêter un observé. Si l’observé e  en  cours  d’exécution  ou  en  sommeil  dans
// l’espace  utilisateur  et  que  PTRACE_SYSCALL  e  effectif,  l’appel syème est
// interrompu et l'arrêt-sortie-appel-syème e signalé (l’appel syème  interrompu
// e  redémarré  quand  l’observé e redémarré). Si l’observé avait déjà été arrêté
// par un signal et que PTRACE_LIEN lui avait été envoyé,  l’observé  s’arrête  avec
// PTRACE_EVENT_OP  et WOPSIG(atus) renvoie le signal d’arrêt. Si n’importe quel
// autre arrêt-ptrace e créé en même temps (par exemple, si un signal e  envoyé  à
// l’observé),  cet  arrêt-ptrace arrive. Si rien de ce qui précède ne s’applique (par
// exemple si l’observé e en cours d’exécution en espace utilisateur),  il  s’arrête
// avec  PTRACE_EVENT_OP  avec  WOPSIG(atus)  ==  SIGTRAP.  PTRACE_INTERRUPT  ne
// fonctionne que sur les observés attachés par PTRACE_SEIZE.

// PTRACE_LIEN =Redémarrer l'observé arrêté, mais en l'empêchant de s'exécuter. L'état résultant de
// l'observé e similaire a celui d'un processus qui a été arrêté par un SIGOP  (ou
// autresignald'arrêt).Consultezlasous-section  Arrêt-groupe  pour  des
// renseignements supplémentaires. PTRACE_LIEN ne fonctionne que  sur  les  observés
// attachés par PTRACE_SEIZE.




int main(int  argc, char **argv) {
	// Parse argument: 
/*
  Get all the commandline
*/
  if (argc < ARGC_MIN)
    return usage();
// pid = fork()
// if pid == 0
// {
// 	ptrace(PTRACE_TRACEME); 
//  execve(...)
// }
// while (waipid() -> syscall/signal)
//  if syscall: 
//if syscall entree && singleton ate: entree 
// syscall paused, -> new syscall -> new singleton ?
//if syscall entree && singleton sortie/no_syscall
// read argmnt : regiers or ack ?
// singlton entree
//else if syscall sortie && singleton entree
// read exit value: regier eax
// singlton sortie
//else if signale non syscall:
//print signal value
// Check for argument: 
// at(argument)
// perror at
// open process
// 		PTRACE ME ptrace(PTRACE_ME, pid, NULL, NULL)
//		exec file
// 		perror exec
// ptrace option ?
// PTRACE CHILD ptrace(PTRACE_ATTACH / ??, pid, ??, ??);
// while (siganel != terminé)	// si fils recoit signal, fils arreté et père à un retour de waitpid. (waitpid dans une thread pour savoir quand fils recoit un signal ?)
// 									// Quand fils arreté, père peut utiliser ptrace(REQUETE, fils, ...) pour inspecter / modifier fils
//									// Si excve de fils reussi, fils recoit SIGTRAP et père e averti. Fils e oppé et père a la fin sur fils avant qu'il s'execute
//		analyze if signal got ?
// 		trace syscall and print
// 		keep excutiong
//waitpid(&signal) != TERMINE
// do la analyze and rerun fils to be killed ?
// ptrace(PTRACE_DETACH, fils, ...)	// END
}















