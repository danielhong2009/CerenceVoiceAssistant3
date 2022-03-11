[header]
language = enu
type = FITNESS
charset = utf-8

[data]
#Block name=General_T2T_rules type=T2T_GENERAL customSort=true comment=
#Block name=Linebased_T2T_rules type=T2T_LINE customSort=false comment=
/And what what weight did you use/   -->   "And what weight did you use"  # ID=003 type=T2T_LINE comment=
/\QNext, kettlebell swing.\E/   -->   "Next, kettlebell swing"  # ID=007 type=T2T_LINE comment=
/Boflex nameplate/   -->   "Bowflex nameplate"  # ID=004 type=T2T_LINE comment=
/continous/   -->   "continuous"  # ID=006 type=T2T_LINE comment=
/rythym/   -->   "rhythm"  # ID=005 type=T2T_LINE comment=
/\Q>!?\E/   -->   "?"  # ID=001 type=T2T_LINE comment=
/\Q!?\E/   -->   "?"  # ID=002 type=T2T_LINE comment=
#Block name=SpecMapping_rules type=MAP_SPEC customSort=false comment=
#Block name=PromptMapping_rules type=MAP_PROMPT customSort=false comment=
/(?<=^|\\|\s)\QRaise the dumbbells to your shoulders in the front rack position with your palms facing each other, elbows vertical, and one end of the dumbbell resting on your shoulder.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141191004_06123503_44\\."  # ID=0141191004_06123503_44 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTo select a weight, rotate both adjustment knobs until the desired weight number is aligned with the arrow located on the outward edge of the Bowflex nameplate.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140804919_10038787_33\\."  # ID=0140804919_10038787_33 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWith your left leg, step backward, and lower your body into a lunge, until both knees are bent at 90 degrees, with your left knee barely off the ground.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141237373_09608648_a3\\."  # ID=0141237373_09608648_a3 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QStep backward with your left leg, and lower your body into a lunge until both knees are bent to 90 degrees, with the left knee barely off the ground.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140809101_09725252_27\\."  # ID=0140809101_09725252_27 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QKeeping your torso upright, squeeze the glute of the kneeling leg, and drive the hips forward into a comfortable hip and groin stretch.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141238030_10868675_70\\."  # ID=0141238030_10868675_70 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start, and do as many russian twists as possible, without breaking form or stopping rhythm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140783335_04872218_c2\\."  # ID=0140783335_04872218_c2 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start, and do as many pushups as possible, without breaking form or stopping rhythm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140782762_14298156_2e\\."  # ID=0140782762_14298156_2e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start, and do as many pushups as possible, without breaking form or stopping rhythm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141238447_05731656_c7\\."  # ID=0141238447_05731656_c7 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start, and do as many burpees as possible, without breaking form or stopping rhythm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141240407_03711651_67\\."  # ID=0141240407_03711651_67 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QBegin in the pushup position on hands and toes, with hands shoulder width apart and elbows fully extended.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585271_05729276_b8\\."  # ID=0140585271_05729276_b8 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThen, turn each adjustment, so that the number, say 5, is aligned with the arrow in the Bowflex nameplate.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140782581_04823387_29\\."  # ID=0140782581_04823387_29 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start, and do as many planks as possible, without breaking form or stopping rhythm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140802735_07115158_0e\\."  # ID=0140802735_07115158_0e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QSit into a low squat and glide your hips as far as you can, side to side, while maintaining squat depth.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585070_01867983_84\\."  # ID=0140585070_01867983_84 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start, and do as many situps as possible, while keeping your feet on the floor.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140626825_14273475_0e\\."  # ID=0140626825_14273475_0e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start, and do as many situps as possible, while keeping your feet on the floor.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140812966_12872299_35\\."  # ID=0140812966_12872299_35 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWalk your hands forward, placing your weight into your arms, until your body is in a plank position.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140809540_12865732_ac\\."  # ID=0140809540_12865732_ac type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start and try to do 20 bent rows without breaks in your movement pattern.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141234170_14834601_3d\\."  # ID=0141234170_14834601_3d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start and try to do 20 bent rows without breaks in your movement pattern.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141238668_14763721_1d\\."  # ID=0141238668_14763721_1d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QBefore we get moving, let's get familiar with changing the weight on your fitness equipment.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141245397_00024227_e9\\."  # ID=0141245397_00024227_e9 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QFor dumbbells, push down slightly on the handle to ensure it's fully seated in the base.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141242857_14397764_04\\."  # ID=0141242857_14397764_04 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QPlace your hands behind your head, and curl up so that your chest touches your thighs.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140811884_16576874_c1\\."  # ID=0140811884_16576874_c1 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QBend forward at the hips and keep your back straight, with a slight bend in the knees.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141233977_10180402_9e\\."  # ID=0141233977_10180402_9e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTrace forward circles by moving arms up and forward into the biggest circle possible.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141243304_06654699_60\\."  # ID=0141243304_06654699_60 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWith both adjustment numbers set to 5, pull the handle straight up from the dumbbell.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141245672_01557798_4f\\."  # ID=0141245672_01557798_4f type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHinge your back and hips, rotating to bring right hand to left foot, and vice versa.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140603334_10255792_79\\."  # ID=0140603334_10255792_79 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe weight increments range from 5 to 52 and a half pounds on both adjustment knobs.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141190547_02783132_55\\."  # ID=0141190547_02783132_55 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QSay stop when you're done and can no longer maintain your form or consistent rhythm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141191424_01588445_af\\."  # ID=0141191424_01588445_af type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThis workout starts with a warmup, then five exercises, with a cool down at the end.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141239534_03926842_9c\\."  # ID=0141239534_03926842_9c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTap stop when you're done and can no longer maintain your form or consistent rhythm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141243504_15377656_0e\\."  # ID=0141243504_15377656_0e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QRemember, it's not how many reps you can do, it's how many perfect reps you can do.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141244299_00011703_8e\\."  # ID=0141244299_00011703_8e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QKeeping your legs straight, bend at the waist, to place your hands on the ground.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141233423_14836897_9d\\."  # ID=0141233423_14836897_9d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTo increase the weight, return the dumbbell to the base using a vertical motion.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140771478_04713757_d7\\."  # ID=0140771478_04713757_d7 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QLower the weights towards the floor, until your elbows are completely straight.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140608893_06001202_5b\\."  # ID=0140608893_06001202_5b type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QLie on your back with your knees at right angles, and feet flat on the floor.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141234356_09123332_de\\."  # ID=0141234356_09123332_de type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTap stop when you can no longer maintain your form or consistent movement.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140619829_06650411_a9\\."  # ID=0140619829_06650411_a9 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QSay stop when you can no longer maintain your form or consistent movement.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141192040_04256645_d6\\."  # ID=0141192040_04256645_d6 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you can no longer maintain your form or consistent rhythm, say stop.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140803998_06739091_6f\\."  # ID=0140803998_06739091_6f type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGet your dumbbells and adjust each one to 25 percent of your body weight.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141234932_11583632_ef\\."  # ID=0141234932_11583632_ef type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGet your dumbbells and adjust each one to 20 percent of your body weight.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141243664_10518633_1f\\."  # ID=0141243664_10518633_1f type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QKeep your feet wide, legs straight, and arms extending out to the sides.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140669708_15191869_37\\."  # ID=0140669708_15191869_37 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTap stop when you can no longer maintain your form or consistent rhythm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141243883_09461322_f5\\."  # ID=0141243883_09461322_f5 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHold the weight at your chest, with both hands, in the goblet position.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141236888_05840009_d4\\."  # ID=0141236888_05840009_d4 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QKeep your back flat, as the weight is pulled towards the belly button.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140810972_04968210_06\\."  # ID=0140810972_04968210_06 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTap stop when you're done, when you can no longer maintain good form.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140622175_04655622_32\\."  # ID=0140622175_04655622_32 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start and do as many flutter kicks as you can.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140814578_02173483_bc\\."  # ID=0140814578_02173483_bc type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QSay stop when you're done, when you can no longer maintain good form.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141192169_02635614_05\\."  # ID=0141192169_02635614_05 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QSit down as low as comfortable, trying to sit back into the tailbone.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141233237_05038851_17\\."  # ID=0141233237_05038851_17 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QKeeping your body in a straight line, lower your chest to the floor.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585280_16099601_43\\."  # ID=0140585280_16099601_43 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start and do up to 24 continuous repetitions.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141193505_11396452_04\\."  # ID=0141193505_11396452_04 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start and do up to 24 continuous repetitions.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141237704_07362502_b4\\."  # ID=0141237704_07362502_b4 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThen, place one foot forward, so both knees are bent at 90 degrees.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141237888_00131866_79\\."  # ID=0141237888_00131866_79 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QRotate each adjustment knob, turning it freely in both directions.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141232564_16188081_1e\\."  # ID=0141232564_16188081_1e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGrab one dumbbell and adjust it to 20 percent of your body weight.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141236303_15390580_8c\\."  # ID=0141236303_15390580_8c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAlright, this cool down was the last part of your workout anyway.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140654491_14422007_11\\."  # ID=0140654491_14422007_11 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThen, slowly lower the weight back down to the starting position.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140775762_16210508_71\\."  # ID=0140775762_16210508_71 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHold for five seconds, then relax and repeat 5 times on each leg.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141193901_02293685_01\\."  # ID=0141193901_02293685_01 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTap stop when you're done and can no longer maintain good form.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140624042_16541017_42\\."  # ID=0140624042_16541017_42 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThis removes only the handle from the base and weighs 5 pounds.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140770843_10767892_f9\\."  # ID=0140770843_10767892_f9 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QModify the movement by starting on your knees, instead of toes.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140775351_06784898_c7\\."  # ID=0140775351_06784898_c7 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QSay stop when you're done and can no longer maintain good form.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141193621_16220447_15\\."  # ID=0141193621_16220447_15 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start and do as many lunges as you can.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140814798_02828386_1c\\."  # ID=0140814798_02828386_1c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start and do as many squats as you can.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140817200_06995220_88\\."  # ID=0140817200_06995220_88 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start and do as many squats as you can.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141235246_16428555_15\\."  # ID=0141235246_16428555_15 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QIt’s the last exercise in your workout, so you’re all done!\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140817332_16428459_fa\\!"  # ID=0140817332_16428459_fa type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHow did you do your pushups: on your knees or on your toes?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141191669_00039990_ed\\?"  # ID=0141191669_00039990_ed type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, I won't log this one since we're ending it so soon.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141239347_01545995_3d\\."  # ID=0141239347_01545995_3d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QStart standing with your arms extended out to the sides.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140774745_06560226_d1\\."  # ID=0140774745_06560226_d1 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QSquat as deep as possible, sitting back into your hips.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140813302_16389121_cc\\."  # ID=0140813302_16389121_cc type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QI can skip specific exercises when you’re in a workout.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141194143_07152939_00\\."  # ID=0141194143_07152939_00 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTaking time to focus on your form on this one is great.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141194677_13239530_e2\\."  # ID=0141194677_13239530_e2 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qbench presses without breaks in your movement pattern.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140666927_13522345_96\\."  # ID=0140666927_13522345_96 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QReturn to standing, then, repeat on the opposite side.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141237602_15631281_f9\\."  # ID=0141237602_15631281_f9 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHold for five seconds, then relax and repeat 5 times.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585752_04908085_de\\."  # ID=0140585752_04908085_de type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qlat pulldown without breaks in your movement pattern.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140665051_07451168_1e\\."  # ID=0140665051_07451168_1e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QLog how many reps you did and which weights you used.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141242290_08584526_7d\\."  # ID=0141242290_08584526_7d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qfront squat without breaks in your movement pattern.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140666454_09086550_25\\."  # ID=0140666454_09086550_25 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGet your dumbbells and adjust each one to 20 pounds.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141191963_09259583_34\\."  # ID=0141191963_09259583_34 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGet your dumbbells and adjust each one to 30 kilos.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140627000_02344774_0b\\."  # ID=0140627000_02344774_0b type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qcalf raise without breaks in your movement pattern.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140808765_10210957_e7\\."  # ID=0140808765_10210957_e7 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QMake sure there's a click at each weight increment.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141232719_09640645_a0\\."  # ID=0141232719_09640645_a0 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThen, reverse the movement to return to standing.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140809793_15386967_44\\."  # ID=0140809793_15386967_44 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QStart standing with your feet at shoulder width.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140774901_11711265_f9\\."  # ID=0140774901_11711265_f9 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QPause, then push back to the starting position.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140621681_05462094_b4\\."  # ID=0140621681_05462094_b4 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qpushup without breaks in your movement pattern.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140810710_03169658_09\\."  # ID=0140810710_03169658_09 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qlunge without breaks in your movement pattern.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140665886_08973968_bf\\."  # ID=0140665886_08973968_bf type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QYou have two exercises and the cool down left.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141195249_13522898_74\\."  # ID=0141195249_13522898_74 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QStart standing with feet shoulder width apart.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141237113_06297127_d0\\."  # ID=0141237113_06297127_d0 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAlright, do you want to pick another workout?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141196145_09090330_3c\\?"  # ID=0141196145_09090330_3c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext, 10 shoulder circles in each direction.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140774544_13832593_f0\\."  # ID=0140774544_13832593_f0 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QPlant your feet as far apart as comfortable.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141243181_04656375_d8\\."  # ID=0141243181_04656375_d8 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThis helps you locate the proper alignment.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140597895_16760406_16\\."  # ID=0140597895_16760406_16 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last exercise is the spread foot glide.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140810105_03496125_18\\."  # ID=0140810105_03496125_18 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThen rotate each adjustment knob clockwise.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141233007_10701783_30\\."  # ID=0141233007_10701783_30 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the alternating reverse lunges.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140660318_15355372_89\\."  # ID=0140660318_15355372_89 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qexercise is the alternating reverse lunge.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140665418_15712493_24\\."  # ID=0140665418_15712493_24 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start and try to do\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140808110_01352321_df\\"  # ID=0140808110_01352321_df type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAnd it's just fine if you can only do one.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141238864_14541144_34\\."  # ID=0141238864_14541144_34 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAre you sure you want to end the workout?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141196013_09995906_c1\\?"  # ID=0141196013_09995906_c1 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThen push back up to the start position.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585289_05940909_7c\\."  # ID=0140585289_05940909_7c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last exercise is the shoulder press.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586631_11759525_d8\\."  # ID=0140586631_11759525_d8 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNow, you're ready to begin your workout.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140606142_03632422_49\\."  # ID=0140606142_03632422_49 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last exercise is the reverse lunge.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140622406_13720605_e8\\."  # ID=0140622406_13720605_e8 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThis workout starts with a warmup, then\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140669600_03022095_8a\\"  # ID=0140669600_03022095_8a type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qexercises, with a cool down at the end.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140656930_08993995_9c_NA083\\."  # ID=0140656930_08993995_9c_NA083 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last exercise is the russian twist.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140781608_15897850_89\\."  # ID=0140781608_15897850_89 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWay to work a little harder here today.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141239009_07529178_40\\."  # ID=0141239009_07529178_40 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHow much weight did you lift per side?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140626584_03157649_d9\\?"  # ID=0140626584_03157649_d9 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QLet's start with kneeling hip flexors.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140662453_14527363_f2\\."  # ID=0140662453_14527363_f2 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last exercise is the lat pullover.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140664559_16302914_02\\."  # ID=0140664559_16302914_02 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGet your dumbbells and adjust each one\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140667976_01512788_a6\\"  # ID=0140667976_01512788_a6 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start and do up\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140801652_16626066_ec\\"  # ID=0140801652_16626066_ec type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start and do up\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140801944_02284630_be\\"  # ID=0140801944_02284630_be type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThen, repeat in the reverse direction.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140809338_07052769_fb\\."  # ID=0140809338_07052769_fb type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDo you want me to log 20 or 25 pounds?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141239423_09564343_9c\\?"  # ID=0141239423_09564343_9c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAnd there's nothing wrong with 0 reps.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141245068_10352974_0e\\."  # ID=0141245068_10352974_0e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last exercise is the front squat.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140781542_10656506_9e\\."  # ID=0140781542_10656506_9e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last exercise is the reverse fly.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140810268_10289730_3a\\."  # ID=0140810268_10289730_3a type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last exercise is a reverse lunge.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140810812_04073466_a6\\."  # ID=0140810812_04073466_a6 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext time I’ll put down five million!\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141194500_05222372_0c\\!"  # ID=0141194500_05222372_0c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QPlace your feet shoulder width apart.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141233212_01983996_49\\."  # ID=0141233212_01983996_49 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last warmup move is 5 inchworms.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140605046_02785373_40\\."  # ID=0140605046_02785373_40 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHere are some designed just for you.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140682442_02497457_0a\\."  # ID=0140682442_02497457_0a type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNow, 10 alternating reverse lunges.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585107_14125708_a4\\."  # ID=0140585107_14125708_a4 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, no weights on this one today.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140649628_01906431_e4\\."  # ID=0140649628_01906431_e4 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last exercise is reverse lunge.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140664240_04527408_60\\."  # ID=0140664240_04527408_60 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDo as many front squats as you can.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140814510_01437248_00\\."  # ID=0140814510_01437248_00 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, the 20 pound weights, got it.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141194875_07153138_47\\."  # ID=0141194875_07153138_47 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QSet your feet shoulder width apart.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141233893_03456834_aa\\."  # ID=0141233893_03456834_aa type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWe'll start with shoulder presses.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586248_14022550_11\\."  # ID=0140586248_14022550_11 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThen, repeat on the opposite side.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140774405_05856075_e8\\."  # ID=0140774405_05856075_e8 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qexercise is the kettlebell swings.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140813697_09329270_13\\."  # ID=0140813697_09329270_13 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, no weight on this one today.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141194277_12780927_ec\\."  # ID=0141194277_12780927_ec type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, the 20 pound weight, got it.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141239260_06724993_bc\\."  # ID=0141239260_06724993_bc type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QStart with 10 spread foot glides.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140624121_00308959_91\\."  # ID=0140624121_00308959_91 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qlat pullovers  in each direction.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140659549_00087164_d5\\."  # ID=0140659549_00087164_d5 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qexercise is the tricep extension.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140664517_08201320_86\\."  # ID=0140664517_08201320_86 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qexercises and the cool down left.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140782221_06176549_04\\."  # ID=0140782221_06176549_04 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDid you use the 20 pound weights?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141194990_01890697_ac\\?"  # ID=0141194990_01890697_ac type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the shoulder circles.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586605_11998636_e8\\."  # ID=0140586605_11998636_e8 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDid you use the 20 pound weight?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140653064_06634568_89\\?"  # ID=0140653064_06634568_89 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QEnter the weights that you used.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140805906_00659851_14\\."  # ID=0140805906_00659851_14 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe third exercise is the situp.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141190908_13397105_e6\\."  # ID=0141190908_13397105_e6 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAlright, let's log your workout.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141242252_07640442_49\\."  # ID=0141242252_07640442_49 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGrab one dumbbell and adjust it\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140587105_02425953_42\\"  # ID=0140587105_02425953_42 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHow many reps did you complete?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140626722_04665358_5d\\?"  # ID=0140626722_04665358_5d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the shoulder circle.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140781749_11039017_40\\."  # ID=0140781749_11039017_40 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QYou're using kilograms, got it!\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140806896_09153825_0f\\!"  # ID=0140806896_09153825_0f type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDo as many push ups as you can.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140817564_16061767_a3\\."  # ID=0140817564_16061767_a3 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThat is one repetition, or rep.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141243451_02893024_0a\\."  # ID=0141243451_02893024_0a type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qexercise is the curtsy lunges.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140660480_16322472_5c\\."  # ID=0140660480_16322472_5c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QKeep a slow and steady rhythm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140679027_16659227_ba\\."  # ID=0140679027_16659227_ba type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNow, do 10 spread foot glides.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141243020_03542445_c7\\."  # ID=0141243020_03542445_c7 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QStart in a kneeling position.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585724_14455258_95\\."  # ID=0140585724_14455258_95 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, say start.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585808_10327332_55\\."  # ID=0140585808_10327332_55 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhich one do you want to log?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140653181_05542555_28\\?"  # ID=0140653181_05542555_28 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, let's log your workout.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140653326_06029138_b3\\."  # ID=0140653326_06029138_b3 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qtuck jumps in each direction.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140663718_16766270_54\\."  # ID=0140663718_16766270_54 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAnd what weights did you use?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140805850_08046864_48\\?"  # ID=0140805850_08046864_48 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDo as many squats as you can.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140806170_04752346_7d\\."  # ID=0140806170_04752346_7d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhen you're ready, tap start.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140815518_07426696_c1\\."  # ID=0140815518_07426696_c1 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, done with this workout?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141196565_04642410_2e\\?"  # ID=0141196565_04642410_2e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOnly one more exercise to go.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141235367_13930217_dd\\."  # ID=0141235367_13930217_dd type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QKeep your feet on the floor.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585863_07783619_30\\."  # ID=0140585863_07783619_30 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the reverse flys.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140661817_14820725_37\\."  # ID=0140661817_14820725_37 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up, spread foot glides.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140662310_07543509_1e\\."  # ID=0140662310_07543509_1e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qexercise is the split squat.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140667600_03384925_05\\."  # ID=0140667600_03384925_05 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAnd what weight did you use?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140673298_05386681_26\\?"  # ID=0140673298_05386681_26 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHold a plank for 60 seconds.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140768902_07008451_1c\\."  # ID=0140768902_07008451_1c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the flutter kick.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140781280_16046131_9a\\."  # ID=0140781280_16046131_9a type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWe'll start with hip raises.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141198606_04485204_0d\\."  # ID=0141198606_04485204_0d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the curtsy lunge.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141240815_14641960_3b\\."  # ID=0141240815_14641960_3b type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qpercent of your body weight.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141241282_01180142_c2\\."  # ID=0141241282_01180142_c2 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QReady to start your workout?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141245278_10130572_0c\\?"  # ID=0141245278_10130572_0c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QYou're using kilos, got it!\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586203_14899424_c2\\!"  # ID=0140586203_14899424_c2 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the calf raises.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140664001_09420565_97\\."  # ID=0140664001_09420565_97 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDo as many reps as you can.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140806106_14204541_39\\."  # ID=0140806106_14204541_39 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWe'll start with inchworms.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140806469_12901717_ec\\."  # ID=0140806469_12901717_ec type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QLet's start with inchworms.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141190478_10164231_2e\\."  # ID=0141190478_10164231_2e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWe'll start with bent rows.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141198909_09976568_91\\."  # ID=0141198909_09976568_91 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the front squat.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141234624_09232994_cd\\."  # ID=0141234624_09232994_cd type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAlright, wrap this one up?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140655311_11770828_48\\?"  # ID=0140655311_11770828_48 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhich weights did you use?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140768022_04702840_11\\?"  # ID=0140768022_04702840_11 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext, kneeling hip flexor.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140778546_00331864_2e\\."  # ID=0140778546_00331864_2e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, let's get warmed up.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140808856_10708413_06\\."  # ID=0140808856_10708413_06 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QUse this chart as a guide.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140810904_07825398_14\\."  # ID=0140810904_07825398_14 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QLog your reps and weights.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141190382_06351027_41\\."  # ID=0141190382_06351027_41 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWe'll start with crunches.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141240591_15448500_fe\\."  # ID=0141240591_15448500_fe type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the bicep curl.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141240670_01119246_f0\\."  # ID=0141240670_01119246_f0 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QLog how many reps you did.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141242449_00952333_65\\."  # ID=0141242449_00952333_65 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the tuck jump.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140667397_07540007_27\\."  # ID=0140667397_07540007_27 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhat weights did you use?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140767793_05162671_7b\\?"  # ID=0140767793_05162671_7b type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhich weight did you use?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140768123_14434746_54\\?"  # ID=0140768123_14434746_54 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGet your dumbbells ready.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140768338_05079954_a3\\."  # ID=0140768338_05079954_a3 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThen, return to standing.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140772683_11898937_d0\\."  # ID=0140772683_11898937_d0 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTwo more exercises to go.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140778377_09209921_01\\."  # ID=0140778377_09209921_01 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qexercise is the windmill.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140781370_05010820_3b\\."  # ID=0140781370_05010820_3b type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWe'll start with pushups.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141233579_00616017_4e\\."  # ID=0141233579_00616017_4e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHold them at arms length.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141233841_06686257_77\\."  # ID=0141233841_06686257_77 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHow many reps did you do?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141242609_03078887_d1\\?"  # ID=0141242609_03078887_d1 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDo 10 spread foot glides.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141242780_05537118_2b\\."  # ID=0141242780_05537118_2b type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, skipping this one.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140585962_15926728_45\\."  # ID=0140585962_15926728_45 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the box jump.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586772_12748057_3e\\."  # ID=0140586772_12748057_3e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QWhat weight did you use?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140802585_10220642_98\\?"  # ID=0140802585_10220642_98 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay, time to cool down.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140815417_00845475_f9\\."  # ID=0140815417_00845475_f9 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the bent row.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141245946_08536222_19\\."  # ID=0141245946_08536222_19 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGet your weights ready.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140584746_11202880_fb\\."  # ID=0140584746_11202880_fb type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qpounds weights, got it.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586997_14601553_08\\."  # ID=0140586997_14601553_08 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext, mountain climber.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140667195_05771510_ac\\."  # ID=0140667195_05771510_ac type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qcontinuous repetitions.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140673445_06175803_f1\\."  # ID=0140673445_06175803_f1 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext time I’ll put down\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140802460_02704310_57\\"  # ID=0140802460_02704310_57 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe last warmup move is\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140813604_04728879_f2\\"  # ID=0140813604_04728879_f2 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the burpee.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586720_02450149_9d\\."  # ID=0140586720_02450149_9d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the crunch.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586877_12731646_83\\."  # ID=0140586877_12731646_83 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGet ready to work out.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140596473_12130265_64\\."  # ID=0140596473_12130265_64 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAlright, let's log it.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140779774_14858206_12\\."  # ID=0140779774_14858206_12 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext, kettlebell swing\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140801545_03451444_22\\"  # ID=0140801545_03451444_22 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qexercise is the plank.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140810203_16325549_3f\\."  # ID=0140810203_16325549_3f type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the situp.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586667_04940262_37\\."  # ID=0140586667_04940262_37 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up is the squat.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140666766_06129390_57\\."  # ID=0140666766_06129390_57 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qthen relax and repeat\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140669261_14875764_3d\\"  # ID=0140669261_14875764_3d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qmore exercises to go.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140782033_03839086_4a\\."  # ID=0140782033_03839086_4a type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDo you want me to log\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140807151_06595221_57\\"  # ID=0140807151_06595221_57 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QStart with 10 squats.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140808953_05221759_b7\\."  # ID=0140808953_05221759_b7 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qkilos weight, got it.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141241072_05086003_86\\."  # ID=0141241072_05086003_86 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAlright, 10 pounds.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586054_06121229_0d\\."  # ID=0140586054_06121229_0d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QReturn to standing.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140774048_03882814_f1\\."  # ID=0140774048_03882814_f1 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOutstanding effort.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140776532_13926696_b6\\."  # ID=0140776532_13926696_b6 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext, 10 windmills.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141190816_05430559_e8\\."  # ID=0141190816_05430559_e8 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Q20 pounds, got it.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140650643_02113132_26\\."  # ID=0140650643_02113132_26 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up, push ups.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140657505_16286667_29\\."  # ID=0140657505_16286667_29 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qmountain climbers.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140663472_04443044_75\\."  # ID=0140663472_04443044_75 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qkilograms, got it.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140681648_15196582_51\\."  # ID=0140681648_15196582_51 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qkilograms weights?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140781839_04234835_3e\\?"  # ID=0140781839_04234835_3e type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qtimes on each leg.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140782110_01914673_df\\."  # ID=0140782110_01914673_df type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNow, 10 windmills.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141191336_08173478_05\\."  # ID=0141191336_08173478_05 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qtricep extensions.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141198318_05059026_63\\."  # ID=0141198318_05059026_63 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Q1 million pounds?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141194436_12136108_f6\\?"  # ID=0141194436_12136108_f6 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHold a plank for\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140587071_11007351_20\\"  # ID=0140587071_11007351_20 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QLet's start with\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140657666_06099726_64\\"  # ID=0140657666_06099726_64 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext, hip raise.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140665162_13933110_98\\."  # ID=0140665162_13933110_98 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThat is one rep.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141234544_01334196_ce\\."  # ID=0141234544_01334196_ce type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext up, planks.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141242741_04047039_f5\\."  # ID=0141242741_04047039_f5 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext, deadlift.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586658_14970257_e6\\."  # ID=0140586658_14970257_e6 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext, inchworm.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586764_00951170_58\\."  # ID=0140586764_00951170_58 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe goal is 25.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141191250_09073800_23\\."  # ID=0141191250_09073800_23 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QTry me again….\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586013_04283628_30\\."  # ID=0140586013_04283628_30 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qpounds weight?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140807402_08680654_84\\?"  # ID=0140807402_08680654_84 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qlat pulldowns.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141198427_08179514_b6\\."  # ID=0141198427_08179514_b6 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThat is 1 rep.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141243809_12026280_e9\\."  # ID=0141243809_12026280_e9 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qfront squats.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140781067_07602277_6c\\."  # ID=0140781067_07602277_6c type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGreat warmup!\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140809843_14731110_c5\\!"  # ID=0140809843_14731110_c5 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qsplit squats.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141230005_02303903_5d\\."  # ID=0141230005_02303903_5d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qbicep curls.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586334_04433533_92\\."  # ID=0140586334_04433533_92 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qbench press.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140663300_00364292_02\\."  # ID=0140663300_00364292_02 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QThe goal is\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140669001_08137615_9d\\"  # ID=0140669001_08137615_9d type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDo 10 reps.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140806027_06680624_e5\\."  # ID=0140806027_06680624_e5 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDid you use\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140809991_06987843_13\\"  # ID=0140809991_06987843_13 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QGreat work!\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140810853_14008196_fe\\!"  # ID=0140810853_14008196_fe type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Q30 pounds!\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586030_09617952_f3\\!"  # ID=0140586030_09617952_f3 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qinchworms.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586434_08323529_87\\."  # ID=0140586434_08323529_87 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qdeadlifts.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140657919_07883720_b4\\."  # ID=0140657919_07883720_b4 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qbox jumps.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140780821_00895585_0f\\."  # ID=0140780821_00895585_0f type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qkilograms?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140783492_15279195_bf\\?"  # ID=0140783492_15279195_bf type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QStart with\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141198816_00293579_67\\"  # ID=0141198816_00293579_67 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qwindmills.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141201248_06240856_1b\\."  # ID=0141201248_06240856_1b type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QAlright,\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586981_08823950_73\\,"  # ID=0140586981_08823950_73 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QYou have\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::SDIA3232_FULL_NA007\\"  # ID=SDIA3232_FULL_NA007 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QHold for\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140669261_13575184_c5\\"  # ID=0140669261_13575184_c5 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Q20 reps.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140751882_07096228_47\\."  # ID=0140751882_07096228_47 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qpushups.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140780139_08042507_49\\."  # ID=0140780139_08042507_49 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qsquats.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140780948_16303443_00\\."  # ID=0140780948_16303443_00 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qpounds.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140807713_11049458_31\\."  # ID=0140807713_11049458_31 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNow, do\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141196915_15074185_c7\\"  # ID=0141196915_15074185_c7 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qsitups.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141198005_13541328_27\\."  # ID=0141198005_13541328_27 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qtimes.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140587148_11866904_59\\."  # ID=0140587148_11866904_59 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qkilos.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140668035_08240384_c6\\."  # ID=0140668035_08240384_c6 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qkilos!\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140668428_11371452_eb\\!"  # ID=0140668428_11371452_eb type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qkilos?\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140807198_14840921_b1\\?"  # ID=0140807198_14840921_b1 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNice!\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586038_08811254_42\\!"  # ID=0140586038_08811254_42 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QOkay,\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140586989_04273695_52\\,"  # ID=0140586989_04273695_52 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNext,\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141198244_03105911_85\\,"  # ID=0141198244_03105911_85 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qreps.\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141241146_11325273_71\\."  # ID=0141241146_11325273_71 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\Qnice\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140801442_03681309_98\\"  # ID=0140801442_03681309_98 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QNow,\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0140813793_15722371_d0\\,"  # ID=0140813793_15722371_d0 type=MAP_PROMPT comment=
/(?<=^|\\|\s)\QDo\E(?=$|\e|\s)/   -->   "\\prompt=FITNESS::0141240336_16404700_05\\"  # ID=0141240336_16404700_05 type=MAP_PROMPT comment=
