import java.util.*;

/**
* Finds the first non repeated character in the given string.
* For example: 'total' => 'o' and 'teeter' => 'r'
**/
public class NonRepeatedChar {

	public enum SeenStatus { 
		SeenOnce, SeenTwice
	}

	public static void main(String[] args) {
		String[] testCases = new String[] {
			"total",
			"teeter"
		};

		for (int i = 0; i < testCases.length; i++) {
			System.out.println(getFirstNonRepeatedChar(testCases[i]));
		}
	}

	public static Character getFirstNonRepeatedChar(String word) {
		Map<Character, SeenStatus> charMap = new HashMap<Character, SeenStatus>();
		Character c;

		for (int i = 0; i < word.length(); i++) {
			c = Character.valueOf(word.charAt(i));
			charMap.put(c, charMap.containsKey(c) ? SeenStatus.SeenTwice : SeenStatus.SeenOnce);
		}

		for (int i = 0; i < word.length(); i++) {
			c = Character.valueOf(word.charAt(i));
			if (charMap.get(c) == SeenStatus.SeenOnce) {
				return c;
			}
		}

		return null;
	}

}