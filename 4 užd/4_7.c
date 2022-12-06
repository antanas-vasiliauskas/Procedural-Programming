#include <stdio.h>

/*
    char
    signed char
    unsigned char
    short
    signed short
    unsigned short
    int
    signed int
    unsigned int
    long
    signed long
    unsigned long
    long long
    signed long long
    unsigned long long
*/

int main(){

    for (char i = 0;;){
        char larger_step = 100;
        char tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("char reziai: [%d; %d]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }

    for (signed char i = 0;;){
        signed char larger_step = 100;
        signed char tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("signed char reziai: [%d; %d]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }

    for (unsigned char i = 0;;){
        unsigned char larger_step = 100;
        unsigned char tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("unsigned char reziai: [%u; %u]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }




    for (short i = 0;;){
        short larger_step = 100;
        short tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("short reziai: [%d; %d]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }

    for (signed short i = 0;;){
        signed short larger_step = 100;
        signed short tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("signed short reziai: [%d; %d]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }

    for (unsigned short i = 0;;){
        unsigned short larger_step = 100;
        unsigned short tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("unsigned short reziai: [%u; %u]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }




    for (int i = 0;;){
        int larger_step = 100;
        int tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("int reziai: [%d; %d]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }

    for (signed int i = 0;;){
        signed int larger_step = 100;
        signed int tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("signed int reziai: [%d; %d]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }

    for (unsigned int i = 0;;){
        unsigned int larger_step = 100;
        unsigned int tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("unsigned int reziai: [%u; %u]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }




    for (long i = 0;;){
        long larger_step = 100;
        long tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("long reziai: [%ld; %ld]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }

    for (signed long i = 0;;){
        signed long larger_step = 100;
        signed long tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("signed long reziai: [%ld; %ld]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }

    for (unsigned long i = 0;;){
        signed long larger_step = 100;
        signed long tmp = i;
        i += larger_step;
        if(tmp > i){
            i -= larger_step;
            for(;;){
                tmp = i++;
                if(tmp > i){
                    printf("signed long reziai: [%lu; %lu]\n", i, tmp);
                    break;
                }
            }
            break;
        }
    }


    for (long long i = 0;;){
        long long larger_larger_step = 1e12;
        long long larger_step = 1e6;
        long long tmp = i;
        i += larger_larger_step;
        if(tmp > i){
            i -= larger_larger_step;
            for(;;){
                tmp = i;
                i += larger_step;
                if(tmp > i){
                    i -= larger_step;
                    for(;;){
                        tmp = i++;
                        if(tmp > i){
                            printf("long long reziai: [%lld; %lld]\n", i, tmp);
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }

    for (signed long long i = 0;;){
        signed long long larger_larger_step = 1e12;
        signed long long larger_step = 1e6;
        signed long long tmp = i;
        i += larger_larger_step;
        if(tmp > i){
            i -= larger_larger_step;
            for(;;){
                tmp = i;
                i += larger_step;
                if(tmp > i){
                    i -= larger_step;
                    for(;;){
                        tmp = i++;
                        if(tmp > i){
                            printf("signed long long reziai: [%lld; %lld]\n", i, tmp);
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }

    for (unsigned long long i = 0;;){
        unsigned long long larger_larger_step = 1e12;
        unsigned long long larger_step = 1e6;
        unsigned long long tmp = i;
        i += larger_larger_step;
        if(tmp > i){
            i -= larger_larger_step;
            for(;;){
                tmp = i;
                i += larger_step;
                if(tmp > i){
                    i -= larger_step;
                    for(;;){
                        tmp = i++;
                        if(tmp > i){
                            printf("unsigned long long reziai: [%llu; %llu]\n", i, tmp);
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }

}
