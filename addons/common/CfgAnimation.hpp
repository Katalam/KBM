class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class LadderCivilStatic;
		class LadderCivilUpLoop: LadderCivilStatic {
			speed = "1.05/(2/3)";
		};
	};
};
class CfgAnimation {
	ladderSpeed = "0.5/(1/3)";
};
