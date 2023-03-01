#include "sauvegarde.h"

void sauvegarde_dresseur(dresseur *perso){
    FILE* f;
    f = fopen("save_partie.dat","wb");
    
    if(f != NULL){
	    fwrite(perso,sizeof(dresseur),1,f);
	}

    fclose(f);
}

int recup_sauvegarde_dresseur(dresseur *perso){
    FILE* f;
    f = fopen("save_partie.dat","rb");
    if(f != NULL){
		fread(perso,sizeof(dresseur),1,f);
		fclose(f);
        return 0;
	}
    else {
        return 1;
    }
}