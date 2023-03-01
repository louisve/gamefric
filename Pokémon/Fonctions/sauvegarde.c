#include "sauvegarde.h"

// void sauvegarde_niveau(etage *level){
//     FILE* f;
//     f = fopen("save_niv.dat","wb");
    
//     if(f != NULL){
// 			fwrite(level,sizeof(etage),1,f)
// 	}

//     fclose(f);
// }

// void recup_sauvegarde_niveau(etage *level){
//     FILE* f;
//     f = fopen("save_niv.dat","ab");
//     if(f != NULL){
// 		fread(level,sizeof(etage),1,f);
// 		fclose(f);
// 	}
// }

// void sauvegarde_dresseur(dresseur *perso){
//     FILE* f;
//     f = fopen("save_dress.dat","wb");
    
//     if(f != NULL){
// 			fwrite(perso,sizeof(dresseur),1,f)
// 	}

//     fclose(f);
// }

// void recup_sauvegarde_dresseur(dresseur *perso){
//     FILE* f;
//     f = fopen("save_dress.dat","ab");
//     if(f != NULL){
// 		fread(perso,sizeof(dresseur),1,f);
// 		fclose(f);
// 	}
// }

// void reinit_fichiers(){
//     FILE* f;
//     FILE *f2;
//     f = fopen("save_dress.dat","wb");
//     f2 = fopen("niv.dat","wb");
//     fclose(f);
//     fclose(f2);
// }


void sauvegarde_dresseur(dresseur *perso){
    FILE *f;
    f = fopen("save_partie.dat","wb");
    if(f != NULL){
        fwrite(perso, sizeof(dresseur),1,f);
        fclose(f);
    }
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