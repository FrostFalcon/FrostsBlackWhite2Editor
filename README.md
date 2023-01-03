# Frost's Black and White 2 Editor

Featured here is the editor program that I made I use to hack pokemon Black and White 2.

The main editor contains several features, such as pokemon, moves, trainers, and even script editing. It also contains a few special game modes for those looking for new challenge runs and a custom patcher for transfering hacks efficiently.

The Lite version of the editor strips away the more complex features if you are only looking to apply patches or custom game modes.

Note that this has not been thoroughly tested outside of personal use for my own rom hacks. There will always be the possibly of the editor crashing or breaking a rom if it is not used as intended.

# Main Editor Features

__Pokemon Editor:__ Lets you edit the base stats, movesets, tms, and evolutions of a pokemon. Also lets you modify the sprite palette of a pokemon. Palette editing is less polished, so use with caution.

__Move Editor:__ Lets you edit the data of attacks such as damage, type, and extra effects. Adding moves and copying animations are experimental, so use these with caution (adding moves is disabled for safety reasons).

__Text Editor:__ Lets you edit in game text including story text and misc text.

__Trainer Editor:__ Lets you modify trainers and their pokemon. Also allows adding trainers. Keep in mind to add trainers, you must also add text fields for their name and dialogue as well as an npc to trigger the battle.

__Script Editor:__ Lets you edit the scripts that operate in game cutscenes. This tends to break busy areas, so stick to safer areas like houses. Scripting is very complicated, so you shouldn't mess with this if you don't know what you are doing. You can learn some basics of scripting here: https://projectpokemon.org/home/forums/topic/25852-b2w2-scripting-thread/

__Overworld Editor:__ Allows you to add, remove, or modify npcs, warps, and triggers. This is also somewhat complicated, so do your research before using this feature. This editor is also useful for locating certain script or encounter files.

__Encounter Editor:__ Lets you edit the pokemon encounter pools throughout the game. This editor condenses slots into a list of potential encounters for ease of use. Just remember that the groups you assign must still fit neatly into the game's slots. For land encounters, the slots are: 20%, 20%, 10%, 10%, 10%, 10%, 5%, 5%, 4%, 4%, 1%, 1%. For water encounters, the slots are: 60%, 30%, 5%, 4%, 1%.

__Patching:__ You can create and apply patches to send other people hacks. Normally, the patch will include data from all of the NARC files you have loaded. You can choose to exclude certain NARCs to reduce the file size since NARC sizes are not created equal, and some are significantly bigger than others.

__Custom Hame Modes:__ These use blanket statements to apply special rules to the game. You can read more about them in the Lite version of the editor.

__Auto Loading:__ A simple quality of life feature that will automatically load the given rom whenever you start the editor.

# Slay the Spoink

This is a custom gamemode inspired by Slay the Spire which drastically changes how the game is played. It can be applied through either the main editor or lite editor. This hack replaces the main story entirely. Instead, you fight through randomly generated rooms that progressively get stronger. Every 12 rooms, you'll fight a boss, ending with either Iris or Ghetsis.

Along the way, you'll choose which path you want to take by talking to the npcs at the top of the room. Your options may include a trainer to fight, a ranger who lets you catch a wild pokemon, a nurse who will heal you, a shop to buy things, or an item you can pick up. You'll have to plan your route carefully to survive each floor while raising your team to keep up with the level curve.

After applying the hack to your rom, start by saving your run right away. Every time you want to start a new run, you'll have to reapply the hack with the editor, but you can restart the run from this save. For each run, you'll start by talking to your mom. She will give you a starter and a few items and transport your to the first room. From there you will progress through each room by interacting with the NPC in front of you, then choosing one of the NPCs in the back who will take you to the next room. If you white out, you lose, and you have to restart the run.

# NCB2v0.9.bw2Patch

This is the main rom hack for black 2 (untested for white 2) that I made the editor for. It features revamped trainer battles, pokemon reworks, and massively expanded route encounters all specifically designed with a nuzzlocke and level caps in mind while keeping the core of the game intact. You can apply this patch to a vanilla rom (which is not provided) and try it yourself if you are interested in a challenge. This is also compatable with Slay the Spoink, helping make several pokemon stronger and more interesting.

There are two major additions to the progression of this rom hack:

First, before you meet Bianca to receive your starter, You can enter the house to the left of the lookout and talk to the ditto there. It will give you a random starter from any generation. After receiving your starter, you can go back to Bianca and continue as normal. You still have to get your usual starter to progress the story. In a typical run, I pick the starter with the same element as the one ditto gave me, (this is important so your rival gets the right starter) and release it after the first rival.

The second addition comes after you complete the quest in Flocessy Ranch. Going north of the trainer school into Pledge Grove, you'll find a scientist studying the rock formation. He is a difficult optional trainer that you can fight before the first gym. Beating him will reward you with a fishing rod which can be used to get extra early game encounters in Aspertia City and Virbank City. The rest of the game plays out as normal.

Keep in mind this hack is extremely difficult. You shouldn't expect to beat it on your first few tries, but the increased pokemon variety should ensure that no two runs feel the same. Also the pokemon were balanced with strict level caps in mind, so I highly suggest following them. The level caps are as follows:

Flocessy Ranch Rival - 10

Aspertia Gym - 14

Virbank Gym - 20

Castelia Gym - 26

Nimbasa Gym - 32

Driftveil Gym - 36

Mistralton Gym - 42

Undella Rival - 45

Oppelucid Gym - 50

Humilau Gym - 56

Zinzolin and Colress - 64

Ghetsis - 66

Elite 4 - 74

Champion - 75

Finally, note that this hack is still in development. The current version is 0.9, which has the main story progression mostly complete. Some side area trainers might have been missed, there is no post game, and the Kyurem fight before Ghetsis is underleveled.

# Some notable issues with the editor:

The editor may not be compatible with some other editors. Attempting to use this in conjunction with another editor to make a single hack likely won't work.

Script and overworld editing is unstable when working with existing story related elements. While these tools are very powerful and can do a lot in terms of writing custom scenes, even working in the same areas as certain cutscenes make break them.

The patch files are specifically made to work with the editor. As such, they won't work with any other patching system.

The loading bar is janky. When you open or save a rom, wait for the confirmation message before you start touching things.
