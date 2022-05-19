//IT21162350
class DietPlan
{
private:
	int dietID;
	string dietPlanType;
	string dietPlanName;
	string dietPlanDuration;

	Member * MemPlan;
	Dietitian * Dietitian;

public:
	DietPlan();
	DietPlan(int PlanID, string PlanType, string PlanName, string PlanDuration);
	
	Diet_Plan(Member* MemPlan);
	
	void DisplayDietPlan();
	~DietPlan();
};
