**Application Overview**
MLBB Hero Drafting Console App simulates the hero-picking phase in Mobile Legends: Bang Bang. 
The drafting process involves:
  •	Interactive hero selection for the player’s team.
  •	Automated picks for the enemy team.
  •	Time-limited input with automatic fallback.
  •	Role-based drafting and lane assignment.
  •	Hero uniqueness enforcement to avoid duplicate picks.
  •	Formatted and color-coded output for better console readability.
  •	Unit testing using Google Test for reliability.

**Key Features of MLBB Hero Drafting**
1.	Interactive Role and Hero Selection:
  •	User is prompted to select a hero role (MARKSMAN, TANK, MAGE, ASSASSIN, FIGHTER, SUPPORT).
  •	Input validation for role and hero name with retries and fallbacks.
2.	Timeout Mechanism:
  •	15-second timer for role selection.
  •	30-second timer for hero selection.
  •	Auto-picking mechanism when the user fails to respond or chooses invalid input.
3.	Role-Based Hero Pool:
  •	Heroes are fetched based on the selected role.
  •	Auto-pick chooses from the valid role's pool.
4.	Hero Uniqueness Enforcement:
  •	Picks consider already-picked heroes to avoid duplicates.
5.	Team Assignment:
  •	Heroes are assigned to BlueTeam or RedTeam based on pick turn.
  •	Each hero is placed into a specific lane (GOLD LANE, ROAM, MIDLANE, JUNGLE, EXP).
6.	Hero Display Info:
  •	Each hero's info is shown after being picked using Hero::displayInfo().
7.	Enemy Auto-Pick:
  •	Enemy team picks automatically after the user completes their pick.

