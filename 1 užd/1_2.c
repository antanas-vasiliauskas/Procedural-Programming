#include <stdio.h>
// Increase terminal size to see ascii art.
int main(){
    printf("Antanas\nVasiliauskas\n1 kursas\n3 grupe\n");

    char ascii_art[] =
                "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMP\"\".=\"..`\".\n"
                "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMPP\"\". .,,z\$$P\"\$\$\n"
                "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\"   c\$\$\$\$$F\"'P `$F\n"
                "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMP\". ,c\$\$\$??\"\" ?? cd\$\$\n"
                "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMP\".<> c\$\"\"\" zr???ccc\$\$\"F\n"
                "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMP\".<<>> `.z\$\$,.\"-?.`,d\$\"\$\$\n"
                "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\".<>' ccc ?\"\"?\"$ccP\"`?\$$cc,\n"
                "\"\"\"\"\"\"\"\"?PPPPPPPPPPPPP>\"\"\"<?4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMP .'',d\$\$\$\".  ,c\$\$??  ?c,.`??\n"
                "!!!!!!!;;;;;;;;,.````'`<!!!>'MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\".  <$P\".\"  ? dP\"\".zcccd\$\$$cdr\n"
                "!!!!!!!!!!!!!!!!!!!!!>;,,.`-  \"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMP ;C \"?\$ d\$??h..''  \$\$\$\$\$\$\$\$?? .\n"
                "!!!!!!!!!!!!!!!!!!!!!!'''`<>;, \"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\",<CCC>.\"-' c?$P\" ccd\$\$\$$F \" .zdF\n"
                "!!!!!!!!!!!!!!!!!!'.,,cdcc,'``<>;,\"\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\",CCCCCCC' ; \" .  . `?\$\$\$$cc`\"\"\".r\n"
                "!!!;,!!;;,`<!!!!! ,\$\$\$\$\$\$\$\$??c,`'!!>.'\"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\",<CCCCC> ;!! c\$\"  \$ h.\"?\$\"\"\$????\".\n"
                "!!!!!!!!!!;,!;, ;c$P\"`\"\"\"\",c=?.\" `!!!!;,\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\",CCCCCC' <''' _.zF`\$.`?$c,zc,zcccc\$\n"
                "!!!!!!!!!!!!!;, d\$$L \$\$.,\$$P=  h `!!!!!!> \"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMP CCCCCC  `,cc\$\$\$\$\$\$ ?$c,`\"\$\$\$\$\$\$\$\$\$\$\n"
                "!!!!!!!!!!!!!!! \$\$\$\"   \$\$\$\$\$\$.,\$ <!!!!!!!!;`MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM <>>>''_,c\$\$\$\$\$\$??\"'z.\"?\$$c`?\$\$\$\$\$\$\$\$\n"
                "!!!!!!!!!!!!!!!;`\$\",d$c\$\$\$\$\$\$\$\"F.`!!!!!!!!! `MMMMMMMMMMMMMMMMMMMMMMMMMMMMM\"\"_.,.\"\"4444MMMMMMMMMMMMMMMMMMMMMMMMMP\"\"_.,cc\$\$\$\$\$\$\$\$??\",c\$\$$P\"\"..`?c ?\$\$\$\$\$\$\$\n"
                "!!!!!!!!!!!!!!!! ' d\$\$\$\$\"\"?$h.' ;<!!!!!!!!!!.`4MMMMMMMMMMMMMMMMMMPPPPP\"\".zr???\$\$\$\$\$$cc`\"4MMMMMMMMMMMPPPP\"\"_.,cccc\$\$\$\$\$\$\$\$\$\$$C cc\$\$\$$P\" zc\$\$??- \" \"?\$\$\$\$\$\n"
                "!!!!!!!''''``.,,,' \$\$\$\$\$$c-.\"? ;!!!!''```'`<!>.`4MMMMMMMMMMP\"\"'_,cccccd\$\$$hc='`\$$h.\"\"\"\"hh.\"??\"\"__\"\".zcd\$??)F d\$\$\$\$\$\$\$\$\$\$\$\$$P\"z??\"\" .,. \$\$$Lzc\$\$\$$cc,\"?\$\$\n"
                "!!'`' .zc$hc$F\"\"\" -?\$\$\$\$$P.\$' -`!' ,cc,\"?hc, `'  `\"\"\"\"\"\"\" ,c\$\$\$\$\$\$\$\$\$\$\$\$\$$P\".nx.`\"\"h.`\"?.\"  ==\"\"\"\"\",d?$F dL,cCCCCC?????\"',==\"\" ,;!!!'' ?\$\$\$\$\$\$\$\$\$\$\$$h.?\$\n"
                "     d\$\$\$\$\$\"\"$c \",c\$\$$F\"?;<\";hcc c\$\$\$\$$h==$L,cc\$\$\$\$\$\$\$$c,\"??\$\$\$\$\$\$\$\$\$\$$P\"\",dMMMMMMn.`\"  ? ;dMMM\",cP\".,,cF ,nx;;,,.`\"\"''.. ;  <!!!' ,;;, \"\$\$\$\$\$\$\$\$\$\$\$$h.\"\n"
                ";,; <\$\$\$$F z\$\$\$\$\$\$\$\$\$\$  -??;d\$\".,\$\$\$\$$P\",\$\$??\$\$\$\$\$\$\$\$\$\$\$$P=\$\$\$\$\$\$\$\$$P\"';dMMMMMMMMMMMMMMmnndMMMMn ,z`\$ .,ndMMMMMMMMM CCCCC ! !!!! <.'`'`! \"?\$\$\$\$\$\$\$???\$$h\n"
                "!!! \$\$\$$cc\$\$\$\$\$\$\$\$\$$CL,dhcd\$\$\$\$\$\$\$\$\$\$$F ,d;z;\"\"??\$\$\$\$\$\$$F,c\$\$???\"\"\".xnMMMMMMMMMMMMMMMMMMMMMMMMMM ?\" \" MMMMMMMMMMMMM,`CCCC,`. <!! !'`.,.' ,;;,> ;,  ;.`\$\$\n"
                "!!! \"\$\$\$\$\$\$\$\$\$\$\$\$\$\$$h;?\$\$\$\$\$\$\$\$\$\$\$\$\$$L,c,\"\"??\$\$\$????\"\"'..   .zc\$\$\$-..\"4MMMMMMMMMMMMMMMMMMMMMMMMMbnmMMMMMMMMMMMMMMMMM CCCC>'!.'`!.' ``' ;!!!'!!'`.<C> . \"\n"
                "!!!! ?h \"\$\$\$\$\$\$\$\$\$\$\$\$\"d\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$F ;;;;;,;;;;;!!!!'.zd\$\$\$\$$hd\$$c MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM,`CCCC `!!..```''' !!!! `.;<C' ,;!!.\n"
                "!!!! d$L \$\$\$\$\$\$\$\$\$\$\$\$;\$\$\$\$\$\$\$\$\$\$\$\$\$\"?\$\$ ;!!!!!!!!!!!'' ,c\$\$\$\$\$\$\$\$\$\$\$\$\$ .`\"\"44MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM CCCCC !!!!!!;;;,  `..;CCCC ;!!!!!!\n"
                "!!!>,\$\$$c`,d\$\$\$\$\$\$\$\$\$;\$\$\$\$\$\$\$\$\$??$P \$\$\".!!!!!!!!!!'.,c\$\$\$\$$P\",\$\$\$\$\$\$\$\$ !!!!>;;;,\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMr`CCCC;`!!!!!!!' ;>  CCCCC ;!!!!!!!\n"
                "!!!>'\$\$\$\$. \"\$\$\$\$\$$P)F,?\$\$\$\$\$\$\$$c?\",d\$\$ !!!!!!;;` ,c\$\$\$\$\$\$\$\" ;\$\$\$\$\$\$\$$r !!!!!!!!!>;,'\"\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.`CCCC,`!!!!! ;C>.; <CC>  !!!!!!!!\n"
                "!!!' \$\$\$\$ dcc,,\$\$$CLcc\$\$\$\$\$\$\$\$ -c\$\$\$\$\$ !!!!!!!',d\$\$\$\$\$\$\$\$\",c\$\$\$\$\$\$\$$P ;!!!!!!!!!!!!!!;,\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.`<CCC; `!! <CC <C, .,;! `<!!!!!!\n"
                "!' zd\$\$\$\$ ?\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$c`\$\$\$\$\$ `!!!!! z\$\$\$\$\$\$\$\$\$\",\$\$\$\$\$<\$\$\$\$'<!!!!!!!''`!!!!!!!>;'\"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMn.`<CCC;. ;CCC CC> <!!!!> `!!!!!\n"
                ",c\$\$\$\$\$\$\$>`?\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$P \$\$??$hc,.`' z\$\$\$\$\$\$\$\$\$\",\$\$\$\$\$>d\$\$\$\$ !!!!!!!!>;, `<!!!!!!!; 4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMb.`CCCC,CCC ;CCC, <!!!!>'!!!!!\n"
                "d\$\$\$\$\$\$\$,\"= \"\$\$\$\$?\$\$\$\$\$\$\$\$\$\$\$\$.zc, -c\$\$\$$P<\$\$\$\$\$\$\$\$\$\$$P \$\$\$\$\$>d\$\$\$$P !!!!`<!!!!!!;;,``<!!!!>.'\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMn.`'<<>>'.`CCCC;.``<!,''''`!\n"
                " \"\$\$\$\$\$\$???c \$$P\" \$\$\$\$\$\$\$\$\$\$$c,z\$\$$h\$\$\$\$$F<\$\$\$\$\$\$\$$F\$$F<\$\$\$$Fd\$\$\$\$\$';!!!>;;`<!!!!!!!!;, `<!!!!; \"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmnmMx`<CCCCC>.  ,;;;;,\n"
                "!.`\"?hc.\"= `-   c\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$.?\$\$\$\$\$$P,\$$F<\$\$$Fd\$\$\$\$\$';!!!!!!!>.,..``'''' ,;,``<!!!;'\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMn.`'<CCC ;!!!!!'`\n"
                "!!!;, .,;;;;;,,.`?\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$ ?\$\$\$\$\"z\$\$\$\"<\$\$>d\$\$\$$P ;!!!!!!!!!!!!!!!!;;;!!!!!; ``!!!; MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMn,.` ;!!!!!>;!\n"
                "!!!!!!!!!!!!'``'  ?\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$??\" ?$Fdcc,\"'cd\$\$\$\" $Pld\$\$\$\$\" <!!!!!!!!!!!!!!!!!!!!!!!!!!!>.`!!!; \"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM `!!!!!!!!\n"
                "!''``''''''' ``.:  ?\$\$??\".,;;;;,cccd\$\$\$\$$h ? .,.`\"?\"  d$c\$\$\$$P\".!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! !!!!! MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMb.`''''`<!\n"
                ",;;!!!!!!;;!;   .,;;, =c\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$c,d\$\$\$$c,.\" ?\$\$\$\$$F ;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! `!!!!; \"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMbmnmnmn.\n"
                "!!!!!!!!!!!!!!!!!!!!!>.`?\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$hcc,.`\"\" `!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!> `!!!!!;, \"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                "!!!!!!!!!!!!!!!!!!!!!!!; \"\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$hc,.`<!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  <.```!!!!; \"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                "!!!!!!!!!!!!!!!!!!!!!!!!!;,.`\"?\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$c, `!!!!!!!!!!<!!!!!!!!!!!!!!!!>.. `' ```!!!; \"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!;;,\"\"???\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$.``''''`!;;;, , `!!!!!!!!!!!!!!!!;;!>;,``!!;,'\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                "!!!!!!!!!!!!!!!!!!!!!!!''``,,'   ,c,. \"\"\"\"\"???\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$ccc, ' , ``, -<!!!!!!!!!!!!!!!!!!!>; `!!!;,'\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                "!''''''``````````'''`'  ,cc,,cc\$\$\$\$\$$hc ``<>;;,,.`\"\"\"\"`..\"\"\"?\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$c,`<!!!!!!!!!!!!!!!!!!!!!!!!!!!!;`<!!!!;,\"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                ">   .      ;- ``(   ' /\"\"\"\"??\$\$\$\$\$\$\$\$\$\$\$$cc,`'`<!!!!!!!!!!!>;,\"?\$\$\$\$\$\$\$\$\$\$\$\$\$\$$c,._`'`!!'`<!!!!!!!!!!!!!!!!!!!> !!!!!!>. \"4MMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                "'   ..  -'' ;!!' ,;;,' ;!!!> \$\$\$\"\"`?\$\$\$\$\$\$\$\$\$$c, `!!!!!!!!!!!!; \"?\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$\$$hcc,, `'`'''````'`!!!!!!!!!>'!!!!!!!!;,'\"4MMMMMMMMMMMMMMMMMMMMMMMMMM\n";

    printf(ascii_art);

    return 0;
}
